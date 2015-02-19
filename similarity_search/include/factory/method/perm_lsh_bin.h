/**
 * Non-metric Space Library
 *
 * Authors: Bilegsaikhan Naidan (https://github.com/bileg), Leonid Boytsov (http://boytsov.info).
 * With contributions from Lawrence Cayton (http://lcayton.com/) and others.
 *
 * For the complete list of contributors and further details see:
 * https://github.com/searchivarius/NonMetricSpaceLib 
 * 
 * Copyright (c) 2014
 *
 * This code is released under the
 * Apache License Version 2.0 http://www.apache.org/licenses/.
 *
 */

#ifndef _FACTORY_PERM_INDEX_LSH_BIN_H_
#define _FACTORY_PERM_INDEX_LSH_BIN_H_

#include <method/perm_lsh_bin.h>

namespace similarity {

/*
 * Creating functions.
 */

template <typename dist_t>
Index<dist_t>* CreatePermutationIndexLSHBin(bool PrintProgress,
                           const string& SpaceType,
                           const Space<dist_t>* space,
                           const ObjectVector& dataObjects,
                           const AnyParams& allParams) {
  return new PermutationIndexLSHBin<dist_t, SpearmanRhoSIMD>(
                                                       PrintProgress,
                                                       space,
                                                       dataObjects,
                                                       allParams);

}

/*
 * End of creating functions.
 */

}

#endif
