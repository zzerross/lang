#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame([0, 1, 2])
cd = pd.DataFrame([False, True, False])

print("\ndf:\n", df)
print("\ncd:\n", cd)

# Apply a function to a Dataframe elementwise.
df[0] = cd.applymap(lambda x: "Y" if x else "N")

print("\ndf:\n", df)

"""
df:
    0
0  0
1  1
2  2

cd:
        0
0  False
1   True
2  False

df:
    0
0  N
1  Y
2  N
"""
