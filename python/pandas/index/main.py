#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame(index=["2", "2", "9"])

print("\ndf:\n", df)

df["A"] = "X"

print("\ndf:\n", df)

"""
df:
 Empty DataFrame
Columns: []
Index: [2, 2, 9]

df:
    A
2  X
2  X
9  X
"""
