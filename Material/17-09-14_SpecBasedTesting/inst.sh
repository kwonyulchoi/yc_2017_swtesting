sudo apt-get install -y vim g++ scons wget git unzip build-essential cmake python-dev libncurses5-dev libncursesw5-dev libgtest-dev ctags 
mkdir gtest_tmp ; cd gtest_tmp ; cmake -DBUILD_SHARED_LIBS=ON /usr/src/gtest/ ; make ; sudo cp -a ./libgtest.so ./libgtest_main.so /usr/lib/ ; cd .. ; rm -r gtest_tmp
#./des_16_08_17.py
