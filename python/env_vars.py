# -*- coding: utf-8 -*-
"""
我的计算机课程
读取本机环境变量的示例代码
"""
import os

# 方式一：遍历打印所有环境变量
print("===== 全部环境变量 =====")
for key, value in os.environ.items():
    print(f"{key} = {value}")

# 方式二：读取单个环境变量
print("\n===== 单个环境变量 =====")
path = os.environ.get("PATH")
print(f"PATH = {path}")

# 变量不存在时返回 None，也可以用 get 的第二个参数给默认值
home = os.environ.get("HOME", "未设置")
print(f"HOME = {home}")
