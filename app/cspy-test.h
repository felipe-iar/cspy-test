#ifndef __CSPY_TEST_H__
#define __CSPY_TEST_H__

// Global vars referenced by the C-Spy macro
static inline void cspy_TEST_EQ() {};
__root char cspy_Param_testName[16] = { 0 };
__root int cspy_Param_v1, cspy_Param_v2;

// C-Spy test macros
#define TEST_EQ(testName, v1, v2) \
  do { \
    int n = sizeof(testName); \
    while (n--) { \
      cspy_Param_testName[n] = testName[n]; \
    } \
    cspy_Param_v1 = v1; \
    cspy_Param_v2 = v2; \
    cspy_TEST_EQ(); \
  } while (0)
    
#endif // __CSPY_TEST_H__    