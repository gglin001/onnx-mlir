//===- passes.hpp - ONNF Passes Definition --------------------------------===//
//
// Copyright 2019 The IBM Research Authors.
//
// =============================================================================
//
// This file exposes the entry points to create compiler passes for ONNF.
//
//===----------------------------------------------------------------------===//

#pragma once

#include <memory>

namespace mlir {
class Pass;

std::unique_ptr<Pass> createShapeInferencePass();

/// Pass for lowering frontend dialects to Krnl IR dialect.
std::unique_ptr<mlir::Pass> createLowerToKrnlPass();

// TODO: Add pass for lowering to LLVM IR.

}  // end namespace mlir