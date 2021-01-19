# 2580Algorithm

## 변수 n 함수

* arr : 2차원 배열에 입력받은 스도쿠 문제 저장

  ​		전역변수

* res_cnt

  * arr배열의 0의 갯수를 저장
  * 모두 0이라는 의미의 81로 초기화
  * main 문에서 arr배열을 검사할 때 0이 아닌 숫자일 경우, 감소

* void sdoku(int i, int j)

  * 0인 arr의 자리 채울 수 있는 함수
  * 0을 고쳤으면 1, 아니면 0을 return



## 알고리즘

* main문에서 arr 배열을 검사해서 0이면 sdoku 함수 실행하여 빈칸 채우기

  * 한바퀴 돌린 후 res_cnt가 0이 아니면(0이 하나라도 남았으면)

    res_cnt를 초기화한 후, goto문을 통해 arr배열 검사 다시 실행

  * res_cnt가 0이면, 스도쿠 다 채웠으므로 결과를 출력
  
  * res_cnt를 숫자가 나타날 때마다 감소시키기
  
    81로 초기화



* sdoku 함수에서 가로/세로/칸 검사하여 체울 수 있으면 해당 칸 채우기

  * chk[9] 변수 : 1~9중 사용한 숫자 체크

  * zeroChk : 한 섹션에 0이 두 개 이상이면 그냥 PASS

    섹션에 0이 한 개(검사하고 있는 자리)면, 채우기 실행하고 return하여 함수 종료

  * 검사하면서 0이 나오면 zeroChk를 증가시키고, 숫자가 나오면 chk[숫자-1]을 증가시킴

  * 검사

    * i행, j열에 있는 수에 대한 검사를 실행

    * i행의 다른 원소들 검사 : arr(i)(0) ~ arr(i)(8)

    * j열의 다른 원소들 검사 : arr(0)(j) ~ arr(8)(j)

    * 칸 검사 : i, j로 이중 for문

      ```c++
      for (int k = i / 3 * 3; k < i / 3 * 3 + 3; k++)
      	for (int L = j / 3 * 3; L < j / 3 * 3 + 3; L++)
      ```

      

      

    