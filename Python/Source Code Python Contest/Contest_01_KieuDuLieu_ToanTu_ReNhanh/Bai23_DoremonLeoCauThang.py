'''
    input n, m
    - cau thang gom n buoc
    - so buoc moi lan di chuyen: 1 hoac 2 buoc
    - mong muon so lan di chuyen la BOI cua m
    - so luong di chuyen toi thieu len dinh cau thang thoa man dieu kien la bao nhieu buoc di chuyen
    - input 10 2
    - output 6
    => mong muon so lan di chuyen la boi cua m
    
'''

'''
    - Dinh huong suy nghi giai:
    + tim so lan di chuyen toi thieu len nua dinh cau thang va len toi dinh
    [n / 2, n]
    + neu ma so bac thang la chan => so buoc toi thieu = n // 2
    + neu ma so bac thang la le => so buoc toi thieu = n // 2 + 1
    + cong thuc 1 so a chia het cho so b => (a + b - 1) // b * b 
    + tuong tu: so buoc toi thieu do phai la boi => chia het cho m
    => cong_thuc: (min_step + m - 1) // m * m va kiem tra dap an neu so buoc toi thieu do ma lon hon so bac thang thoi da la n => tra ve - 1 còn neu <= n => tra ve so buoc toi thieu
'''
n, m = map(int, input().split())
min_step, max_step = 0, n
if n % 2 == 0:
    min_step = n // 2
else:
     min_step = n // 2 + 1
ans = (min_step + m - 1) // m * m
if ans <= max_step:
    print(ans)
else:
    print(-1)