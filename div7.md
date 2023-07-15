# Đoạn chia hết cho 7
Xét một dãy $b_1$, $b_2$, . . . , $b_m$ gồm các số nguyên dương, ta định nghĩa giá trị của dãy là tổng của tích các cặp phần tử của dãy, hay nói cách khác là tổng của $b_i$· $b_j$ với 1 ≤ i < j ≤ m.
Cho một dãy $a_1$, $a_2$, . . . , $a_n$ , hãy tính số lượng cặp (l, r) với 1 ≤ l ≤ r ≤ n, thoả điều kiện giá trị
của dãy con $a_l$, $a_{l+1}$, . . . $a_r$ chia hết cho 7.
### Dữ liệu
Dòng đầu tiên gồm một số nguyên duy nhất là số nguyên dương n (1 ≤ n ≤ $10^5$) - độ dài của dãy. Dòng thứ hai gồm n số nguyên dương $a_1$, $a_2$, . . . , $a_n$ (0 ≤ $a_i$ ≤ $10^9$) - các phần tử của dãy a.
### Kết quả
In ra một số nguyên duy nhất là số cặp (l, r) với 1 ≤ l ≤ r ≤ n, thoả điều kiện giá trị của dãy con tương ứng chia hết cho 7.
#### Input 1 2 3
```
3
5 23 2021
5 
0 0 1 7 7
10 
0 1 2 3 4 5 6 7 8 9
```
#### Output 1 2 3 
```
3 
15
26
```