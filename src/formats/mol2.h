//
// Created by krab1k on 24.1.19.
//

#pragma once

#include "reader.h"


class Mol2: public Reader {

public:
    MoleculeSet read_file(const std::string &filename) override;
};
