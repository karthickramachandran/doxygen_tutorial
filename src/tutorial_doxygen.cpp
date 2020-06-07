#include "doxygen_tutorial.h"

/**@brief The start of the application
*/
int main()
{
  TutorialClass app;

  app.create_all_features();

  TestClass test;
  test.testall();

  // The end of the application  
  return 0; 
}

void TestClass::testall(){
  this->test1();
  this->test2();
  this->test3();
}

void TutorialClass::create_all_features(){
  this->create_feature1;
  this->create_feature2;
  this->create_feature3;
}

void TutorialClass::create_feature1(){
  std::cout<<"Feature 1 is created"<<std;;endl;
}

void TutorialClass::create_feature2(){
  std::cout<<"Feature 2 is created"<<std;;endl;
}

void TutorialClass::create_feature3(){
  std::cout<<"Feature 3 is created"<<std;;endl;
}

void TestClass::test1(){
  std::cout<<"Execute test1"<<std;;endl;
}
void TestClass::test2(){
  std::cout<<"Execute test1"<<std;;endl;
}
void TestClass::test3(){
  std::cout<<"Execute test1"<<std;;endl;
}
