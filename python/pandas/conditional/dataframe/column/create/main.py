#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame([0, 1, 2, 3, 4])
cd = pd.DataFrame([True, False, False, True])

df["C"] = df[cd]

print(df)

"""
   0    C
0  0  0.0
1  1  NaN
2  2  NaN
3  3  3.0
4  4  NaN
"""
