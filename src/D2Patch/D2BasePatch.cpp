/*****************************************************************************
 *                                                                           *
 *   D2BasePatch.cpp                                                         *
 *   Copyright (C) 2017 Mir Drualga                                          *
 *                                                                           *
 *   Licensed under the Apache License, Version 2.0 (the "License");         *
 *   you may not use this file except in compliance with the License.        *
 *   You may obtain a copy of the License at                                 *
 *                                                                           *
 *   http://www.apache.org/licenses/LICENSE-2.0                              *
 *                                                                           *
 *   Unless required by applicable law or agreed to in writing, software     *
 *   distributed under the License is distributed on an "AS IS" BASIS,       *
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
 *   See the License for the specific language governing permissions and     *
 *   limitations under the License.                                          *
 *                                                                           *
 *---------------------------------------------------------------------------*
 *                                                                           *
 *   This file defines functions used by the base patch, to define some of   *
 *   the functions used by more specific Diablo II patches.                  *
 *                                                                           *
 *****************************************************************************/

#include "D2BasePatch.h"

#include <memory>
#include <vector>

#include "../D2Offset.h"

D2BasePatch::D2BasePatch(const D2Offset& d2Offset,
                         const size_t patchSize) : d2Offset(d2Offset), patchSize(patchSize) {
}

const D2Offset& D2BasePatch::getD2Offset() const {
    return d2Offset;
}

size_t D2BasePatch::getPatchSize() const {
    return patchSize;
}
