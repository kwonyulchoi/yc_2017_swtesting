SW Testing 3주차 2017.09.14(목)
==============================


실습가이드
----------

# 실습환경 설정

우선 git clone으로 본 repository를 clone 한다.
> $ git clone https://github.com/kwonyulchoi/yc_2017_swtesting.git 

clone 한 디렉토리에서 Material 3주차 디렉토리로 들어간다
> $ cd yc_2017_swtesting/Material/17-09-14_SpecBasedTesting/

해당 디렉토리에 있는 inst.sh를 실행 시킨다. 
이 스크립트를 통해 실습에 필요한 프로그램을 인스톨한다.

$ ./inst.sh

* 선택사항
다음의 스크립트를 통해 최적의 vim editor 개발환경을 설정할 수 있다.
실행시간이 오래 걸리니 설치 여부를 고려 할 것
$ ./des_16_08_17.py


# 실습 1 ; EP / BVA 기법
Practice/EP_BVA 디렉토리에는 EP, BVA 기법을 실습할 수 있는 환경이 구축되어 있다.
## 프로그램의 빌드
$ cd Practice/EP_BVA
$ scons
(프로그램의 문제가 없다면 정상 빌드됨)
## 프로그램의 실행
$ ./run.sh
## 프로그램의 Test 실행
$ ./tt.sh


# 실습 2 ; pairwise 기법
Practice/pairwise 디렉토리에는 pairwise 조합을 만들어주는 프로그램이 들어있다.
## 사용법
$ cd Practice/pairwise
$ ./pairwise.sh mytest.txt
(pair wise 조합이 출력됨)

# 실습 3 ; 상태전이 테스팅 기법
Practice/StateTransitionTest 디렉토리에는 
## 프로그램의 빌드
$ cd Practice/StateTransitionTest
$ scons
 (프로그램의 문제가 없다면 정상 빌드됨)
## 프로그램의 실행
$ ./run.sh
## 프로그램의 Test 실행
$ ./tt.sh


상기 내용을 통해 수업 중 실습과 과제가 부과될 것이며, 
가급적 실습전에 빌드와 실행이 되는지 확인 할것.
