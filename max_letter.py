import os
import sys

# 请在此输入您的代码
num=int(input())
pass_num=0
perfect_num=0
for i in range(num):
    score=int(input())
    if score>=60:
        pass_num+=1
    if score>=85:
        perfect_num+=1
# print(pass_num,perfect_num,num)
pass1=round((pass_num/num)*100)
perfect=round((perfect_num/num)*100)
print(pass1,"%")
print(perfect,"%")