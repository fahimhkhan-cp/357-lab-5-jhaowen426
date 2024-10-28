#include "checkit.h"
#include "task1.h"

/*
str_lower tests
*/
void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test2() {
   char input[] = "EVERY SINGLE CHARACTER IN THIS TEST HAS BEEN CAPITALIZED, THIS IS A LOT OF CHARACTERS. I HOPE THIS TEST PASSES ! ! !";
   char result[100];
   char *expected = "every single character in this test has been capitalized, this is a lot of characters. i hope this test passes ! ! !";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test3() {
   char input[] = "every single character in this test is in lowercase, this is a lot of characters. i hope this test passes ! ! !";
   char result[100];
   char *expected = "every single character in this test is in lowercase, this is a lot of characters. i hope this test passes ! ! !";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test4() {
   char input[] = "tHiS TeSt AlTeRnATES BetwEeN Lower aND uPPEr Case. ThIs IS A PAiN To typE OuT. i hope this test passes ! ! !";
   char result[100];
   char *expected = "this test alternates between lower and upper case. this is a pain to type out. i hope this test passes ! ! !";

   str_lower(input, result);

   checkit_string(result, expected);
}

/*
str_lower_mutate tests
*/
void test5() {
   char input[] = "Hello THERE";
   char *expected = "hello there";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void test6() {
   char input[] = "EVERY SINGLE CHARACTER IN THIS TEST HAS BEEN CAPITALIZED, THIS IS A LOT OF CHARACTERS. I HOPE THIS TEST PASSES ! ! !";
   char *expected = "every single character in this test has been capitalized, this is a lot of characters. i hope this test passes ! ! !";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void test7() {
   char input[] = "every single character in this test is in lowercase, this is a lot of characters. i hope this test passes ! ! !";
   char *expected = "every single character in this test is in lowercase, this is a lot of characters. i hope this test passes ! ! !";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void test8() {
   char input[] = "tHiS TeSt AlTeRnATES BetwEeN Lower aND uPPEr Case. ThIs IS A PAiN To typE OuT. i hope this test passes ! ! !";
   char *expected = "this test alternates between lower and upper case. this is a pain to type out. i hope this test passes ! ! !";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

int main(void) {
   // str_lower tests
   test1();
   test2();
   test3();
   test4();

   // str_lower_mutate tests
   test5();
   test6();
   test7();
   test8();

   return 0;
}
