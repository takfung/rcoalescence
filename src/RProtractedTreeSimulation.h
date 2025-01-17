//
// Created by Sam Thompson on 18/05/2018.
//

#ifndef RCOALESCENCE_RPROTRACTEDTREE_H
#define RCOALESCENCE_RPROTRACTEDTREE_H

#include "necsim/ProtractedTree.h"
#include "RTreeSimulation.h"
namespace rcoalescence
{
    /**
     * @brief Wrapper for protracted non-spatial simulations.
     */
    class RProtractedTreeSimulation : public virtual RTreeSimulation, public virtual ProtractedTree
    {
    public:
        using ProtractedTree::calcSpeciation;
        using ProtractedTree::speciateLineage;
        using ProtractedTree::getProtracted;
        using ProtractedTree::setProtractedVariables;
        using ProtractedTree::getProtractedVariables;
        using ProtractedTree::getProtractedGenerationMin;
        using ProtractedTree::getProtractedGenerationMax;
        using ProtractedTree::protractedVarsToString;
    };
}

#endif //RCOALESCENCE_RPROTRACTEDTREE_H
