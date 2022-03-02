import numpy as np
import matplotlib.pyplot as plt
import os, sys, getopt

def read_file(input_file):
    """
    Input filename and read dataset into ndarray.\n
    :param input_file: file to read data from
    :return: dataset ndarray
    """

    # Define location of dataset
    current_directory = os.path.dirname(__file__)
    filepath = os.path.join(current_directory, input_file)

    # Read data into ndarray.
    headers_and_data = np.genfromtxt(filepath, delimiter=',', dtype=str)
    headers = headers_and_data[0].tolist()
    data = headers_and_data[1:].astype(None)

    return headers, data


def regression(d, x, y, title):

    fig, ax = plt.subplots(2, 1)
    fig.suptitle(title + f" d={d}")
    ax[0].plot(x, y, 'ob', label="Averaged Joint States")
    ax[0].set_xlabel("Time")
    ax[0].set_ylabel("Joint Angle")
    ax[0].grid()

    # Initialize A with ones.
    h = np.ones(x.shape)
    a = h

    # Hstack x's for each degree
    # for i in range(d):
    #     a = np.hstack((x**(i+1), a))

    # Distribute gaussians
    n = 25
    mean = np.linspace(0, 1, n)
    std = np.full((n,), 1 / n)
    for i in range(n):
        a = np.hstack((np.exp(-(x - mean[i])**2 / (2 * std[i]**2)), a))

    # Calculate weights and predict y values
    w = np.linalg.inv(a.T @ a) @ a.T @ y
    y_pred = a @ w

    print(f"Weights: {w}")

    # Get synthetic values for clean plotting
    x_synth = np.linspace(x.min(), x.max(), y_pred.shape[0])
    x_synth.shape = (x_synth.shape[0], 1)
    # Start with homogeneous column
    a_synth = h
    # Synthetic a values
    for i in range(n):
        a_synth = np.hstack((np.exp(-(x_synth - mean[i])**2 / (2 * std[i]**2)), a_synth))
    
    y_synth = a_synth @ w

    # Plot smooth regression line
    ax[0].plot(x_synth, y_synth, '-r', label="Line of \"best\" fit")
    ax[0].legend()

    # Compute regression stats
    r, rsq, mse = stats(y, y_pred)
    # print(f"Polynomial d={d}, RSq: {rsq}, MSE: {mse}")
    # print("roscpp equation: ")
    # for i in range(w.shape[0]):
    #     if i != (w.shape[0] - 1):
    #         print(f"{w[i][0]}*pow(phase, {w.shape[0] - i - 1}.0) + ", end="")
    #     else:
    #         print(f"{w[i][0]}", end="")
    # print("\n")

    # Plot error
    ax[1].plot(x, np.abs(r), 'or')
    ax[1].set_xlabel("Time")
    ax[1].set_ylabel("|y - y*|")
    ax[1].set_title(f"MSE: {mse}")
    ax[1].grid()


def stats(y, y_pred):

    r = y - y_pred

    rss = np.sum(r**2)
    tss = np.sum((y - np.mean(y))**2)

    rsq = 1 - (rss / tss)

    mse = rss / y.shape[0]

    return r, rsq, mse


def linear_regression(input_file, x_col, y_col):
    # Read in datasets.
    headers, data = read_file(input_file)

    # Remove rows with non numeric data.
    data_numeric = data[~np.isnan(data).any(axis=1)]
    print(data_numeric.shape)

    # Pull user defined columns from data
    if type(x_col) is str:
        x_header = x_col
        x = data[:, headers.index(x_col)]
    else:
        x_header = headers[x_col]
        x = data[:, x_col]

    if type(y_col) is str:
        y_header = y_col
        y = data[:, headers.index(y_col)]
    else:
        y_header = headers[y_col]
        y = data[:, y_col]

    # We want 1d arrays not 0d
    x.shape = (x.shape[0], 1)
    y.shape = (y.shape[0], 1)

    regression(1, x, y, y_header)
    # regression(2, x, y, y_header)
    # regression(3, x, y, y_header)
    # regression(4, x, y, y_header)
    # regression(5, x, y, y_header)
    # regression(6, x, y, y_header)
    # regression(7, x, y, y_header)
    # regression(8, x, y, y_header)
    # regression(9, x, y, y_header)
    # regression(10, x, y, y_header)


def main(argv):
    input_file = ''
    x_col = ''
    y_col = ''

    try:
        opts, args = getopt.getopt(argv, "hi:x:y:")
    except getopt.GetoptError:
        print("Usage: linear_regression.py -i <input_file> -x <x_header or x_col> -y <y_header or y_col>")
        sys.exit(2)

    for opt, arg in opts:
        if opt == "-h":
            print("Usage: linear_regression.py -i <input_file> -x <x_header or x_col> -y <y_header or y_col>")
            sys.exit()
        elif opt == "-i":
            input_file = arg
        elif opt == "-x":
            if arg.isdigit():
                x_col = int(arg)
            else:
                x_col = arg
        elif opt == "-y":
            if arg.isdigit():
                y_col = int(arg)
            else:
                y_col = arg

    linear_regression(input_file, x_col, y_col)


if __name__ == "__main__":
    np.set_printoptions(suppress=True)
    main(sys.argv[1:])
    plt.tight_layout()
    plt.show()
