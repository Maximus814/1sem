//
// Created by max_l on 10.10.2018.
//

#ifndef UNTITLED4_UNITTEST_H
#define UNTITLED4_UNITTEST_H

#define UNITTEST( what, opera, truth) \
{\
    if(!((what) opera (truth)))\
        printf("FAIL test!!! %s != %s", #what, #truth)\
    else\
        printf("Test passed")\
};


#endif //UNTITLED4_UNITTEST_H
