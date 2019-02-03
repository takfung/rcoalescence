// This file is part of rcoalescence project which is released under MIT license.
// See file **LICENSE.txt** or visit https://opensource.org/licenses/MIT) for full license details.
/**
 * @author Sam Thompson
 * @file RProtractedSpatialTreeSimulation.h
 * @brief Wraps the ProtractedSpatialTree class for running protracted spatially-explicit neutral models from R.
 *
 * Contact: samuel.thompson14@imperial.ac.uk or thompsonsed@gmail.com
 * @copyright <a href="https://opensource.org/licenses/MIT"> MIT Licence.</a>
 */

#ifndef RCOALESCENCE_RPROTRACTEDSPATIALTREE_H
#define RCOALESCENCE_RPROTRACTEDSPATIALTREE_H

#include "necsim/ProtractedTree.h"
#include "necsim/ProtractedSpatialTree.h"
#include "RSpatialTreeSimulation.h"
namespace rcoalescence
{
    /**
     * @brief Wrapper for spatial, protracted simulations.
     */
    class RProtractedSpatialTreeSimulation : virtual public RSpatialTreeSimulation,
                                             virtual public ProtractedSpatialTree
    {
    public:
        RProtractedSpatialTreeSimulation()
        {
            bIsProtracted = true;
        }

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

#endif //RCOALESCENCE_RPROTRACTEDSPATIALTREE_H