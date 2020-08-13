#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame([0, 1, 2, 3, 4])
print("\ndf.info:\n", df.info(), "\n", df)

condition = df > 2
print("\ncondition: type:", type(condition), "\n", condition)

df2 = df[condition]
print("\ndf2: type:", type(df2), "\n", df2)

"""
<class 'pandas.core.frame.DataFrame'>
RangeIndex: 5 entries, 0 to 4
Data columns (total 1 columns):
 #   Column  Non-Null Count  Dtype
---  ------  --------------  -----
 0   0       5 non-null      int64
dtypes: int64(1)
memory usage: 168.0 bytes

df.info:
 None 
    0
0  0
1  1
2  2
3  3
4  4

condition: type: <class 'pandas.core.frame.DataFrame'> 
        0
0  False
1  False
2  False
3   True
4   True

df2: type: <class 'pandas.core.frame.DataFrame'> 
      0
0  NaN
1  NaN
2  NaN
3  3.0
4  4.0
"""
