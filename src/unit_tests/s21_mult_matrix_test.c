#include "../s21_matrix.h"
#include "check.h"

START_TEST(test_mult_matrix_code_0) {
  matrix_t A = {0}, A_2 = {0}, R_0, X_0;
  s21_create_matrix(2, 2, &A);
  s21_create_matrix(2, 2, &A_2);
  s21_create_matrix(2, 2, &X_0);

  ck_assert_int_eq(s21_mult_matrix(&A, &A_2, &R_0), 0);

  X_0.matrix[0][0] = 0.0;
  X_0.matrix[0][1] = 0.0;
  X_0.matrix[1][0] = 0.0;
  X_0.matrix[1][1] = 0.0;

  ck_assert_int_eq(s21_eq_matrix(&R_0, &X_0), 1);

  s21_remove_matrix(&A);
  s21_remove_matrix(&A_2);
  s21_remove_matrix(&R_0);
  s21_remove_matrix(&X_0);
  ////////////////////////////////////////////////////////////
  matrix_t B = {0}, B_2 = {0}, R_1, X_1;
  s21_create_matrix(2, 3, &B);
  s21_create_matrix(3, 2, &B_2);
  s21_create_matrix(2, 2, &X_1);

  init_matrix(1, &B);
  init_matrix(1, &B_2);

  ck_assert_int_eq(s21_mult_matrix(&B, &B_2, &R_1), 0);

  X_1.matrix[0][0] = 22.0;
  X_1.matrix[0][1] = 28.0;
  X_1.matrix[1][0] = 49.0;
  X_1.matrix[1][1] = 64.0;

  ck_assert_int_eq(s21_eq_matrix(&R_1, &X_1), 1);

  s21_remove_matrix(&B);
  s21_remove_matrix(&B_2);
  s21_remove_matrix(&R_1);
  s21_remove_matrix(&X_1);
  //////////////////////////////////////////////////////////////
  matrix_t C = {0}, C_2 = {0}, R_2, X_2;
  s21_create_matrix(4, 3, &C);
  s21_create_matrix(3, 4, &C_2);
  s21_create_matrix(4, 4, &X_2);

  init_matrix(2, &C);
  init_matrix(1, &C_2);

  ck_assert_int_eq(s21_mult_matrix(&C, &C_2, &R_2), 0);

  X_2.matrix[0][0] = 53.0;
  X_2.matrix[0][1] = 62.0;
  X_2.matrix[0][2] = 71.0;
  X_2.matrix[0][3] = 80.0;
  X_2.matrix[1][0] = 98.0;
  X_2.matrix[1][1] = 116.0;
  X_2.matrix[1][2] = 134.0;
  X_2.matrix[1][3] = 152.0;
  X_2.matrix[2][0] = 143.0;
  X_2.matrix[2][1] = 170.0;
  X_2.matrix[2][2] = 197.0;
  X_2.matrix[2][3] = 224.0;
  X_2.matrix[3][0] = 188.0;
  X_2.matrix[3][1] = 224.0;
  X_2.matrix[3][2] = 260.0;
  X_2.matrix[3][3] = 296.0;

  ck_assert_int_eq(s21_eq_matrix(&R_2, &X_2), 1);

  s21_remove_matrix(&C);
  s21_remove_matrix(&C_2);
  s21_remove_matrix(&R_2);
  s21_remove_matrix(&X_2);
  //////////////////////////////////////////////////////////////
  matrix_t D = {0}, D_2 = {0}, R_3, X_3;
  s21_create_matrix(3, 5, &D);
  s21_create_matrix(5, 5, &D_2);
  s21_create_matrix(3, 5, &X_3);

  init_matrix(2, &D);
  init_matrix(2, &D_2);

  ck_assert_int_eq(s21_mult_matrix(&D, &D_2, &R_3), 0);

  X_3.matrix[0][0] = 290.0;
  X_3.matrix[0][1] = 310.0;
  X_3.matrix[0][2] = 330.0;
  X_3.matrix[0][3] = 350.0;
  X_3.matrix[0][4] = 370.0;
  X_3.matrix[1][0] = 590.0;
  X_3.matrix[1][1] = 635.0;
  X_3.matrix[1][2] = 680.0;
  X_3.matrix[1][3] = 725.0;
  X_3.matrix[1][4] = 770.0;
  X_3.matrix[2][0] = 890.0;
  X_3.matrix[2][1] = 960.0;
  X_3.matrix[2][2] = 1030.0;
  X_3.matrix[2][3] = 1100.0;
  X_3.matrix[2][4] = 1170.0;

  ck_assert_int_eq(s21_eq_matrix(&R_3, &X_3), 1);

  s21_remove_matrix(&D);
  s21_remove_matrix(&D_2);
  s21_remove_matrix(&R_3);
  s21_remove_matrix(&X_3);
  //////////////////////////////////////////////////////////////
  matrix_t E = {0}, E_2 = {0}, R_4, X_4;
  s21_create_matrix(3, 3, &E);
  s21_create_matrix(3, 3, &E_2);
  s21_create_matrix(3, 3, &X_4);

  init_matrix(-3, &E);
  init_matrix(-5, &E_2);

  ck_assert_int_eq(s21_mult_matrix(&E, &E_2, &R_4), 0);

  X_4.matrix[0][0] = 18;
  X_4.matrix[0][1] = 12;
  X_4.matrix[0][2] = 6;

  X_4.matrix[1][0] = 0;
  X_4.matrix[1][1] = 3;
  X_4.matrix[1][2] = 6;

  X_4.matrix[2][0] = -18;
  X_4.matrix[2][1] = -6;
  X_4.matrix[2][2] = 6;

  ck_assert_int_eq(s21_eq_matrix(&R_4, &X_4), 1);

  s21_remove_matrix(&E);
  s21_remove_matrix(&E_2);
  s21_remove_matrix(&R_4);
  s21_remove_matrix(&X_4);
  //////////////////////////////////////////////////////////////
  matrix_t F = {0}, F_2 = {0}, R_5, X_5;
  s21_create_matrix(3, 2, &F);
  s21_create_matrix(2, 3, &F_2);
  s21_create_matrix(3, 3, &X_5);

  init_matrix(4, &F);
  init_matrix(-2, &F_2);

  ck_assert_int_eq(s21_mult_matrix(&F, &F_2, &R_5), 0);

  X_5.matrix[0][0] = -3.0;
  X_5.matrix[0][1] = 6.0;
  X_5.matrix[0][2] = 15.0;
  X_5.matrix[1][0] = -5.0;
  X_5.matrix[1][1] = 8.0;
  X_5.matrix[1][2] = 21.0;
  X_5.matrix[2][0] = -7.0;
  X_5.matrix[2][1] = 10.0;
  X_5.matrix[2][2] = 27.0;

  ck_assert_int_eq(s21_eq_matrix(&R_5, &X_5), 1);

  s21_remove_matrix(&F);
  s21_remove_matrix(&F_2);
  s21_remove_matrix(&R_5);
  s21_remove_matrix(&X_5);
}
END_TEST

START_TEST(test_mult_matrix_code_1) {
  matrix_t A = {0}, A_2 = {0}, R_0;
  s21_create_matrix(-2, -3, &A);
  s21_create_matrix(-2, -2, &A_2);

  ck_assert_int_eq(s21_mult_matrix(&A, &A_2, &R_0), 1);

  // s21_remove_matrix(&A);
  // s21_remove_matrix(&A_2);
  // s21_remove_matrix(&R_0);
  ////////////////////////////////////////////////////////////
  matrix_t B = {0}, B_2 = {0}, R_1;
  s21_create_matrix(-2, -3, &B);
  s21_create_matrix(-2, -4, &B_2);

  init_matrix(1, &B);
  init_matrix(1, &B_2);

  ck_assert_int_eq(s21_mult_matrix(&B, &B_2, &R_1), 1);

  // s21_remove_matrix(&B);
  // s21_remove_matrix(&B_2);
  // s21_remove_matrix(&R_1);
  ////////////////////////////////////////////////////////////
  matrix_t C = {0}, C_2 = {0}, R_2;
  s21_create_matrix(2, 3, &C);
  s21_create_matrix(2, 4, &C_2);

  C.matrix = NULL;

  init_matrix(1, &C_2);

  ck_assert_int_eq(s21_mult_matrix(&C, &C_2, &R_2), 1);

  s21_remove_matrix(&C);
  s21_remove_matrix(&C_2);
  // s21_remove_matrix(&R_2);
}
END_TEST

START_TEST(test_mult_matrix_code_2) {
  matrix_t A = {0}, A_2 = {0}, R_0;
  s21_create_matrix(2, 3, &A);
  s21_create_matrix(2, 2, &A_2);

  ck_assert_int_eq(s21_mult_matrix(&A, &A_2, &R_0), 2);

  s21_remove_matrix(&A);
  s21_remove_matrix(&A_2);
  // s21_remove_matrix(&R_0);
  ////////////////////////////////////////////////////////////
  matrix_t B = {0}, B_2 = {0}, R_1;
  s21_create_matrix(2, 3, &B);
  s21_create_matrix(2, 4, &B_2);

  init_matrix(0, &B);
  init_matrix(1, &B_2);

  ck_assert_int_eq(s21_mult_matrix(&B, &B_2, &R_1), 2);

  s21_remove_matrix(&B);
  s21_remove_matrix(&B_2);
  // s21_remove_matrix(&R_1);
  //////////////////////////////////////////////////////////////
  matrix_t C = {0}, C_2 = {0}, R_2;
  s21_create_matrix(4, 3, &C);
  s21_create_matrix(4, 2, &C_2);

  init_matrix(1, &C);
  init_matrix(1, &C_2);

  ck_assert_int_eq(s21_mult_matrix(&C, &C_2, &R_2), 2);

  s21_remove_matrix(&C);
  s21_remove_matrix(&C_2);
  // s21_remove_matrix(&R_2);
  //////////////////////////////////////////////////////////////
  matrix_t D = {0}, D_2 = {0}, R_3;
  s21_create_matrix(4, 5, &D);
  s21_create_matrix(4, 3, &D_2);

  init_matrix(2, &D);
  init_matrix(4, &D_2);

  ck_assert_int_eq(s21_mult_matrix(&D, &D_2, &R_3), 2);

  s21_remove_matrix(&D);
  s21_remove_matrix(&D_2);
  // s21_remove_matrix(&R_3);
  //////////////////////////////////////////////////////////////
  matrix_t E = {0}, E_2 = {0}, R_4;
  s21_create_matrix(5, 3, &E);
  s21_create_matrix(5, 6, &E_2);

  init_matrix(3, &E);
  init_matrix(3, &E_2);

  ck_assert_int_eq(s21_mult_matrix(&E, &E_2, &R_4), 2);

  s21_remove_matrix(&E);
  s21_remove_matrix(&E_2);
  // s21_remove_matrix(&R_4);
  //////////////////////////////////////////////////////////////
  matrix_t F = {0}, F_2 = {0}, R_5;
  s21_create_matrix(5, 3, &F);
  s21_create_matrix(2, 3, &F_2);

  init_matrix(3, &F);
  init_matrix(1, &F_2);

  ck_assert_int_eq(s21_mult_matrix(&F, &F_2, &R_5), 2);

  s21_remove_matrix(&F);
  s21_remove_matrix(&F_2);
  // s21_remove_matrix(&R_5);
}
END_TEST

Suite *mult_matrix_suite(void) {
  Suite *suite = suite_create("mult_matrix");
  TCase *test_case = tcase_create("case_is_equal");

  tcase_add_test(test_case, test_mult_matrix_code_0);
  tcase_add_test(test_case, test_mult_matrix_code_1);
  tcase_add_test(test_case, test_mult_matrix_code_2);

  suite_add_tcase(suite, test_case);
  return suite;
}

int main() {
  Suite *suite = mult_matrix_suite();
  SRunner *runner = srunner_create(suite);
  srunner_run_all(runner, CK_NORMAL);
  int failures = srunner_ntests_failed(runner);
  srunner_free(runner);
  return failures == 0 ? 0 : 1;
}