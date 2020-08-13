#!/usr/bin/env python3

import pandas as pd

df = pd.DataFrame({
        "DateTime": ["2020/08/13 23:59:22.93", "2020/08/13 23:59:22.92", "2020/08/13 23:59:22.99"],
           "State": [                  "OPEN",                  "CLOSE",                   "OPEN"],
    })
print(df.info(), "\n")
print(df, "\n")

df["DateTime"] = df["DateTime"].astype("datetime64")
print(df.info(), "\n")
print(df, "\n")

df.set_index("DateTime", inplace=True)
print(df.info(), "\n")
print(df, "\n")

"""
<class 'pandas.core.frame.DataFrame'>
RangeIndex: 3 entries, 0 to 2
Data columns (total 2 columns):
 #   Column    Non-Null Count  Dtype 
---  ------    --------------  ----- 
 0   DateTime  3 non-null      object <--- is not datetime type index
 1   State     3 non-null      object
dtypes: object(2)
memory usage: 176.0+ bytes
None 

                 DateTime  State
0  2020/08/13 23:59:22.93   OPEN
1  2020/08/13 23:59:22.92  CLOSE
2  2020/08/13 23:59:22.99   OPEN 

<class 'pandas.core.frame.DataFrame'>
RangeIndex: 3 entries, 0 to 2
Data columns (total 2 columns):
 #   Column    Non-Null Count  Dtype         
---  ------    --------------  -----         
 0   DateTime  3 non-null      datetime64[ns] <--- type was changed
 1   State     3 non-null      object        
dtypes: datetime64[ns](1), object(1)
memory usage: 176.0+ bytes
None 

                 DateTime  State
0 2020-08-13 23:59:22.930   OPEN
1 2020-08-13 23:59:22.920  CLOSE
2 2020-08-13 23:59:22.990   OPEN 

<class 'pandas.core.frame.DataFrame'>
DatetimeIndex: 3 entries, 2020-08-13 23:59:22.930000 to 2020-08-13 23:59:22.990000 <--- as datetime type index
Data columns (total 1 columns):
 #   Column  Non-Null Count  Dtype 
---  ------  --------------  ----- 
 0   State   3 non-null      object <--- "DateTime" column was drop=True
dtypes: object(1)
memory usage: 48.0+ bytes
None 

                         State
DateTime                      
2020-08-13 23:59:22.930   OPEN
2020-08-13 23:59:22.920  CLOSE
2020-08-13 23:59:22.990   OPEN 
"""
