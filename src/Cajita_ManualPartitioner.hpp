/****************************************************************************
 * Copyright (c) 2019 by the Cajita authors                                 *
 * All rights reserved.                                                     *
 *                                                                          *
 * This file is part of the Cajita library. Cajita is distributed under a   *
 * BSD 3-clause license. For the licensing terms see the LICENSE file in    *
 * the top-level directory.                                                 *
 *                                                                          *
 * SPDX-License-Identifier: BSD-3-Clause                                    *
 ****************************************************************************/

#ifndef CAJITA_MANUALPARTITIONER_HPP
#define CAJITA_MANUALPARTITIONER_HPP

#include <Cajita_Partitioner.hpp>

#include <vector>

#include <mpi.h>

namespace Cajita
{
//---------------------------------------------------------------------------//
class ManualPartitioner : public Partitioner
{
  public:

    ManualPartitioner( const std::vector<int>& ranks_per_dim );

    std::vector<int> ranksPerDimension(
        MPI_Comm comm,
        const std::vector<int>& global_cells_per_dim ) const override;

  private:

    std::vector<int> _ranks_per_dim;
};

//---------------------------------------------------------------------------//

} // end namespace Cajita

#endif // end CAJITA_MANUALPARTITIONER_HPP
