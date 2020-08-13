#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame(data=["Y", "E", "S"], index=["2", "2", "9"])

print("\ndf:\n", df)

df.index = df[0]

print("\ndf:\n", df)

"""
df:
    0
2  Y
2  E
9  S

df:
    0
0   
Y  Y
E  E
S  S
"""
