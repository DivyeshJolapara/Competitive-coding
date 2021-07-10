# -*- coding: utf-8 -*-
"""
Created on Wed May  5 00:01:41 2021

@author: divye
"""

tc = int(input())

while tc >0:
    tc-=1
    l=int(input())
    arr = list(map(int,input().split()))
    
    common =-1
    if arr[0] == arr[1]:
        common = arr[0]
    elif arr[0] == arr[2]:
        common = arr[0]
    else:
        common = arr[1]
    
    for i in range(l):
        if arr[i] != common:
            print(i+1)
            break
    
                
    