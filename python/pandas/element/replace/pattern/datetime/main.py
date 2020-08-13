#!/usr/bin/env python3

import datetime 
import pandas as pd
import re

def apply(x):
    try:
        datetime.datetime.strftime(x, "%Y/%m/%d %M:%S:%f")
        return x
    except:
        return datetime.datetime.now().strftime("%Y/") + x

df = pd.DataFrame({"DateTime": ["08/13 23:59:22.93", "1920/08/13 23:59:22.92", "08/13 23:59:22.99"]})
print("\n", df)

df["DateTime"] = df["DateTime"].apply(apply)
print("\n", df)

"""
                  DateTime
0       08/13 23:59:22.93
1  1920/08/13 23:59:22.92
2       08/13 23:59:22.99

                       DateTime
0       2020/08/13 23:59:22.93
1  2020/1920/08/13 23:59:22.92  <-- it is not correct
2       2020/08/13 23:59:22.99
"""
