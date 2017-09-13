SW Testing 3주차 2017.09.14(목)
==============================


제출 가이드
----------



# 제출 방법
과제는 yc_2017_swtesting/Report/17-09-14_SpecBasedTesting 디렉토리에 본인의 학번 디렉토리를 만들고 여기에 작업하여 제출한다.
yc_2017_swtesting/Material/17-09-14_SpecBasedTesting/Practice 디렉토리를 학번 디렉토리에 복사하여 작업하고 제출한다.

# 과제 1 
디렉토리 yc_2017_swtesting/Material/17-09-14_SpecBasedTesting/Practice/EP_BVA/testframework/swut/swut_main.cpp 에는 테스트 스크립트가 있다.
이 테스트 스크립트에는 EP와 BVA 테스트를 포함한다.
swut_main.cpp에는 다음과 같은 내용이 있으며, 이 부분을 추가하여 각각 EP, BVA 기법 테스트를 완성하라.
> TEST_F(SampleTest, EP) {
>   string expected;
>   expected ="A";
>   EXPECT_EQ(expected, GetGrade(93) );
> 
>   expected ="B";
>   EXPECT_EQ(expected, GetGrade(82) );
> }
> 
> TEST_F(SampleTest, BVA) {
>   string expected;
>   expected ="A";
>   EXPECT_EQ(expected, GetGrade(93) );
> 
>   expected ="B";
>   EXPECT_EQ(expected, GetGrade(82) );
> }

제출된 프로젝트는 빌드와 실행이 정상적으로 이루어져야 한다.



# 과제 2
다음의 조합을 입력으로 갖는 SW가 있다. pairwise 조합을 만들고 그 결과를 pairwise_output.txt로 제출하라

> Country: Europe,NorthAmerica,SouthAmerica,SouthAsia    
> Processor : BCM,LG,QUALCOMM,NVDIA
> GradeType:  Elite,Noble,Magnificent,Good,Fair
> Ram : 16GB,32GB,64GB

yc_2017_swtesting/Material/17-09-14_SpecBasedTesting/Practice/pairwise 디렉토리에는 mytest.txt 예제 스크립트를 활용하여 작업하라.

# 과제 3
yc_2017_swtesting/Material/17-09-14_SpecBasedTesting/Practice/StateTransitionTest 디렉토리에는 상태전이 테스팅 템플릿을 포함하고 있다.
해당 템플릿을 활용하여 수업중 다뤘던 turn steel 상태전이 테스팅 테스트 케이스를 바탕으로 테스트 스크립트를 작성하라.

테스트 스크립트 파일은 yc_2017_swtesting/Material/17-09-14_SpecBasedTesting/Practice/StateTransitionTest/testframework/swut/swut_main.cpp 파일에 포함되어 있다.
해당 파일에는 다음의 내용이 있으며, 이를 편집하여 테스트를 수행하라.
파일 안에는 다음 내용이 있고, 해당 부분을 편집할 것.

> TEST_F(FSMTest, state_transition_coverage_00) {
>   // Write Here
> }


제출된 프로젝트는 빌드와 실행이 정상적으로 이루어져야 한다.

