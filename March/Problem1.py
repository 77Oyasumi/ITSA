# 讀取測試資料筆數
n = int(input())

# 進行 n 次測試
for i in range(n):
    # 讀取測試資料
    s = input().rstrip()

    # 計算原始字串的長度
    length = len(s)

    # 刪除重複字元
    unique_chars = set(s)

    # 計算刪除重複字元後的字元個數
    unique_length = len(unique_chars)

    # 輸出結果
    print(length, unique_length)