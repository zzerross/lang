#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame([0, 1, 2, 3, 4])
cd = pd.DataFrame([True, False, False, True])

print("df:\n", df, "\n")
print("cd:\n", cd, "\n")
print("df[cd:\n", df[cd], "\n")

"""
df:
    0
0  0
1  1
2  2
3  3
4  4 

cd:
        0
0   True
1  False
2  False
3   True 

df[cd:
      0
0  0.0
1  NaN
2  NaN
3  3.0
4  NaN 
"""
