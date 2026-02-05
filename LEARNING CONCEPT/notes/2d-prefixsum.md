---
id: th2ya8la26xjey54j9dk2ns
title: 2D Prefix_Sum
desc: ''
updated: 1765206470067
created: 1765200028258
---


Hello Today we are learning about 2D Prefix_Sum -

<br>

A =
1  2  3
4  5  6
7  8  9

FORMULA TO BUILD -> 
<b>pref[i][j] = A[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] ;
    
<br>


Querying a Submatrix (MOST IMPORTANT PART!)
  
sum = pref[r2][c2]- pref[r1-1][c2]- pref[r2][c1-1]+ pref[r1-1] [c1-1] ;



