#!/usr/bin/env python3

import pandas as pd

sr = pd.Series([1, 2, 3])
print()
print(type(sr))
print(sr)

df = pd.DataFrame([1, 2, 3])
print()
print(type(df))
print(df)

"""
<class 'pandas.core.series.Series'>
0    1
1    2
2    3
dtype: int64

<class 'pandas.core.frame.DataFrame'>
   0
0  1
1  2
2  3
"""
