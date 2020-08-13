#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame([0, 1, 2, 3, 4])

print("df.info:\n", df.info())
print("df: \n", df, "\n")

condition = df > 2

print("condition: type:", type(condition))
print("condition: \n", condition, "\n")

df2 = df[condition]

print("df2: type:", type(df2))
print("df2: \n", df2, "\n")
