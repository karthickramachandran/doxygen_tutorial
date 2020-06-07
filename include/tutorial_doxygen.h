#ifndef DOXYGEN_TUTORIAL_H
#define DOXYGEN_TUTORIAL_H

#include <iostream>
#include <string>


/** @brief The TutorialClass class is for the application
 * that has a lot of features.
 * @author Karthick	
 */ 

class TutorialClass{

  std::string the_name; /**< The name of this function.*/

  /**Default Constructor
  */
  TutorialClass();
  /**Default Destructor
  */
  ~TutorialClass();



  /** This creates all the necessary features
   * for the application
  */
  void create_all_features();


  /** The feature1 to open the app
  */
  void create_feature1();

  /** The feature2 to close the app
  */
  void create_feature2();

  /** The feature3 to save the settings the app
  */
  void create_feature3();

};
/** @brief The TestClass class is required
 * to test teh features in the application.
 * @author Karthick	
 */ 
class TestClass{

  /**Default Constructor
  */
  TestClass();
  /**Default Destructor
  */
  ~TestClass();

  /**@brief Execute all the tests one after
   * the other to make sure the application is error free
  */
  testall();

  /**@brief Test the open feature of the application
  */
  void test1();
  /**@brief Test the close feature of the application
  */
  void test2();
  /**@brief Test the save the settings feature of the application
  */
  void test3();

};

#endif
