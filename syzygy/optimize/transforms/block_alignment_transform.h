// Copyright 2013 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// This class implements the functions alignment transformation.

#ifndef SYZYGY_OPTIMIZE_TRANSFORMS_BLOCK_ALIGNMENT_TRANSFORM_H_
#define SYZYGY_OPTIMIZE_TRANSFORMS_BLOCK_ALIGNMENT_TRANSFORM_H_

#include "syzygy/block_graph/filterable.h"
#include "syzygy/block_graph/transform_policy.h"
#include "syzygy/optimize/application_profile.h"
#include "syzygy/optimize/transforms/subgraph_transform.h"

namespace optimize {
namespace transforms {

class BlockAlignmentTransform : public SubGraphTransformInterface {
 public:
  typedef block_graph::BasicBlockSubGraph BasicBlockSubGraph;
  typedef block_graph::BlockGraph BlockGraph;
  typedef block_graph::TransformPolicyInterface TransformPolicyInterface;

  // Constructor.
  BlockAlignmentTransform() { }

  // @name SubGraphTransformInterface implementation.
  // @{
  virtual bool TransformBasicBlockSubGraph(
      const TransformPolicyInterface* policy,
      BlockGraph* block_graph,
      BasicBlockSubGraph* basic_block_subgraph,
      ApplicationProfile* profile,
      SubGraphProfile* subgraph_profile) OVERRIDE;
  // @}

 private:
  DISALLOW_COPY_AND_ASSIGN(BlockAlignmentTransform);
};

}  // namespace transforms
}  // namespace optimize

#endif  // SYZYGY_OPTIMIZE_TRANSFORMS_BLOCK_ALIGNMENT_TRANSFORM_H_
