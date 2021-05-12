import numpy as np


def get_target(df, span=200, cutoff_at=False, only_one_buy=False):
    """returns target, span is how many days for mean"""
    acc = []
    df_len = len(df["close"])

    for i in range(len(df["close"])):

        if i+span < df_len:
            m = np.mean(df["close"][i+1:i+span])
            acc.append(m-df["close"][i])
        else:
            acc.append(None)

    if cutoff_at:
        acc = list(map(lambda x: 0 if x == None or x < cutoff_at else 1, acc))
        if only_one_buy:
            new_acc = []
            prev = 0
            for i in acc:
                if i == 1 and prev == 0:
                    new_acc.append(1)
                    prev = 1
                elif i == 0:
                    new_acc.append(0)
                    prev = 0
                else:
                    new_acc.append(0)
            acc = new_acc

    return acc
