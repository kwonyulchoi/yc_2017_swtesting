SW Testing 4주차 2017.09.28(목)
==============================


실습가이드
----------

# 실습환경 설정
clone 한 디렉토리에서 Material 4주차 디렉토리로 들어간다
> $ cd yc_2017_swtesting/Material/17-09-28_StructureBasedTesting/<br />

# 개인 작업 환경 설정
실습과제의 제출은 Report 디렉토리를 통해서 수행된다.
## 개인 제출 디렉토리 생성
> $ mkdir yc_2017_swtesting/Report/17-09-28_StructureBasedTesting/본인학번<br />
## 템플릿 복사
실습에 필요한 작업 material을 복사한다.(여기서 학번은 21360999라고 가정)
> $ cp -r yc_2017_swtesting/Material/17-09-28_StructureBasedTesting/Practice  yc_2017_swtesting/Report/17-09-28_StructureBasedTesting/21360999<br />

실습은 yc_2017_swtesting/Report/17-09-28_StructureBasedTesting/본인학번 디렉토리에서 수행한다.


# 실습 1 ; IsPrime 테스트 - statement coverage
Practice/IsPrime 디렉토리에는 statement coverage 관련 실습환경이 있다.
## 프로그램의 빌드
> $ cd Practice/IsPrime<br />
> $ scons<br />
(프로그램의 문제가 없다면 정상 빌드됨)
### make clean (오브젝트 산출물 제거)
> $ scons -c <br />

## 프로그램의 실행
> $ ./run.sh<br />
## 프로그램의 Test 실행
> $ ./tt.sh<br />


# 실습 2 ; BinSearch 테스트 - statement-branch coverage
Practice/BinSearch 디렉토리에는 statement coverage 관련 실습환경이 있다.
## 프로그램의 빌드
> $ cd Practice/BinSearch<br />
> $ scons<br />
(프로그램의 문제가 없다면 정상 빌드됨)
### make clean (오브젝트 산출물 제거)
> $ scons -c <br />

## 프로그램의 실행
> $ ./run.sh<br />
## 프로그램의 Test 실행
> $ ./tt.sh<br />

# 실습 3 ; GetPrime 테스트 - statement-branch coverage
Practice/GetPrime 디렉토리에는 statement coverage 관련 실습환경이 있다.
## 프로그램의 빌드
> $ cd Practice/GetPrime<br />
> $ scons<br />
 (프로그램의 문제가 없다면 정상 빌드됨)
### make clean (오브젝트 산출물 제거)
> $ scons -c <br />

## 프로그램의 실행
> $ ./run.sh<br />
## 프로그램의 Test 실행
> $ ./tt.sh<br />


상기 내용을 통해 수업 중 실습과 과제가 부과될 것이며, 
가급적 실습전에 빌드와 실행이 되는지 확인 할것.
