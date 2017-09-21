SW Testing 4주차 2017.09.28(목)
==============================


제출 가이드
----------

# 제출 기한
2017.10.10(화) 23:39 까지 push된 commit을 기준으로 판단.


# 제출 방법
과제는 yc_2017_swtesting/Report/17-09-28_StructureBasedTesting 디렉토리에 본인의 학번 디렉토리를 만들고 여기에 작업하여 제출한다.
yc_2017_swtesting/Material/17-09-28_StructureBasedTesting/Practice 디렉토리를 학번 디렉토리에 복사하여 작업하고 제출한다.

# 과제 1 ; IsPrime() 함수 검증

## Test Coverage Item , Testcase 식별
테스트에 앞서 TD3 Test Coverage Item ,TD4 Testcase 를 식별하고 report.txt에 작성하라.
예)
> Test Coverage Item xx개의 명령문<br />
> tcov1 ; if (num <= 1) <br />
> tcov2 ;   return 0;<br />
> .<br />
> .<br />
> .<br />

## Test Script 작성

디렉토리 yc_2017_swtesting/Material/17-09-28_StructureBasedTesting/Practice/IsPrime/testframework/swut/swut_main.cpp 에는 테스트 스크립트가 있다.
이 테스트 스크립트에는 statement coverage 테스트를 포함한다.
swut_main.cpp에는 다음과 같은 내용이 있으며, 이 부분을 추가하여 테스트를 완성하라.


예)
> TEST_F(SampleTest, StatementCovTest) {
>   EXPECT_EQ(0, is_prime(1));
> }

./tt를 실행하면 현재의 statement/branch coverage를 확인할 수 있다.
statement 커버리지를 100% 만족하는 테스트 케이스를 작성하라.

제출된 프로젝트는 빌드와 실행이 정상적으로 이루어져야 한다.


# 과제 2 ; binsearch() 함수 검증 - Branch coverage


## Test Coverage Item , Testcase 식별
Test condition은 branch coverage를 상정하고,
테스트에 앞서 TD3 Test Coverage Item ,TD4 Testcase 를 식별하고 report.txt에 작성하라.
예) Branch coverage이기 때문에 분기문이 Test Coverage Item이 된다
> Test Coverage Item xx개의 분기문<br />
> tcov1 ; while (low <= high) <br />
> tcov2 ; if ((cond = strcmp(word, tab[mid].word)) < 0)<br />
> .<br />
> .<br />
> .<br />


## Test Script 작성

디렉토리 yc_2017_swtesting/Material/17-09-28_StructureBasedTesting/Practice/BinSearch/testframework/swut/swut_main.cpp 에는 테스트 스크립트가 있다.
이 테스트 스크립트에는 branch coverage 테스트를 포함한다.

./tt를 실행하면 현재의 statement/branch coverage를 확인할 수 있다.
branch 커버리지를 100% 만족하는 테스트 케이스를 작성하라.

제출된 프로젝트는 빌드와 실행이 정상적으로 이루어져야 한다.



# 과제 3 ; get_prime() 함수 검증 - Branch coverage

## Test Coverage Item , Testcase 식별
Test condition은 branch coverage를 상정하고,
테스트에 앞서 TD3 Test Coverage Item ,TD4 Testcase 를 식별하고 report.txt에 작성하라.


## Test Script 작성

디렉토리 yc_2017_swtesting/Material/17-09-28_StructureBasedTesting/Practice/GetPrime/testframework/swut/swut_main.cpp 에는 테스트 스크립트가 있다.
./tt를 실행하면 현재의 statement/branch coverage를 확인할 수 있다.
branch 커버리지를 100% 만족하는 테스트 케이스를 작성하라.

제출된 프로젝트는 빌드와 실행이 정상적으로 이루어져야 한다.


