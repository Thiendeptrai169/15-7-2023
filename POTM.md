# POTM
Một ngày nọ, Doraemon muốn Nobita chứng minh khả năng toán học của mình với Shizuka. Mèo máy cố tình tạo ra một câu đố khó và tin chắc rằng Nobita sẽ giải được, từ đó lấy lòng Shizuka. Doraemon ghi ra tờ giấy trắng một dãy N số nguyên dương tăng dần.
Tiếp theo đó, Shizuka đưa cho Nobita Q câu hỏi. Câu hỏi thứ i chứa 3 giá trị $type_i$, $x_i$, $k_i$
- Nếu $type_i$ = 0, Nobita cần đưa ra tổng của $k_i$ số bé nhất trong xi số đầu tiên.
- Nếu $type_i$ = 1, Nobita cần đưa ra tổng của $k_i$ số bé nhất trong xi số đầu tiên.
Bạn hãy giúp Nobita trả lời các câu hỏi để gây ấn tượng với Shizuka nhé.
### Dữ liệu
- Dòng thứ nhất chứa hai số nguyên dương n, q (1 ≤ n, q ≤ $10^5$)
- Dòng thứ hai gồm n số nguyên ai (1 ≤ $a_i$ ≤ $10^9$) - Dãy số Doraemon cung cấp cho Nobita.
- q dòng sau, mỗi dòng gồm 3 số nguyên typei $(0 ≤ type_i ≤ 1)$, $x_i$, $k_i$ $(1 ≤ k_i ≤ x_i ≤ n)$.
### Kết quả
In ra kết quả trên mỗi dòng là câu hỏi mà Shizuka đố Nobita.
##### Input
```
5 3
1 3 4 6 9
0 3 1
1 4 2
1 5 3
```
##### Output
```
1 
10
19
```