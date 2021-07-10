# -*- coding: utf-8 -*-
"""
Created on Sat May  1 20:05:27 2021

@author: divye
"""


tc=int(input())

while tc > 0:
    tc = tc - 1
    n,k=map(int,input().split())
    
    arr = list(map(int,input().split()))
    
    max_ = max(arr)
    min_ = min(arr)
    
    if n == 1:
        print("0")
        continue
    
    if (k&1) == 1:
        arr = [(max_ - i) for i in arr]
    else:
        arr = [(i - min_) for i in arr]
    
    for i in arr:
        print(i,end=" ")
