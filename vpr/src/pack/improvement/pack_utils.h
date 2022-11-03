//
// Created by elgammal on 2022-07-27.
//

#ifndef VTR_PACK_UTILS_H
#define VTR_PACK_UTILS_H
#include "cluster_util.h"

struct t_pack_iterative_stats {
    int good_moves = 0;
    int legal_moves = 0;
    std::mutex mu;
};
void iteratively_improve_packing(const t_packer_opts& packer_opts,
                                 t_clustering_data& clustering_data,
                                 int verbosity);

void init_clb_atoms_lookup(vtr::vector<ClusterBlockId, std::unordered_set<AtomBlockId>>& atoms_lookup);

#endif //VTR_PACK_UTILS_H
