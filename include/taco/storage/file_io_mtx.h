#ifndef TACO_FILE_IO_MTX_H
#define TACO_FILE_IO_MTX_H

#include <istream>
#include <ostream>
#include <string>

#include "taco/format.h"
#include "taco/storage/storage.h"

namespace taco {
class TensorBase;
class Format;

/// Read an mtx matrix from a file.
TensorBase readMTX(std::string filename, const ModeFormat& modetype, 
                   bool pack=true);

/// Read an mtx matrix from a file.
TensorBase readMTX(std::string filename, const Format& format, bool pack=true);

/// Read an mtx matrix from a stream.
TensorBase readMTX(std::istream& stream, const ModeFormat& modetype, 
                   bool pack=true);

/// Read an mtx matrix from a stream.
TensorBase readMTX(std::istream& stream, const Format& format, bool pack=true);

TensorBase readSparse(std::istream& stream, const ModeFormat& modetype, 
                      bool symm = false);
TensorBase readDense(std::istream& stream, const ModeFormat& modetype, 
                     bool symm = false);

TensorBase readSparse(std::istream& stream, const Format& format, 
                      bool symm = false);
TensorBase readDense(std::istream& stream, const Format& format, 
                     bool symm = false);

/// Read an mtx matrix from a file.
TensorStorage readToStorageMTX(std::string filename, const ModeFormat& modetype);

/// Read an mtx matrix from a file.
TensorStorage readToStorageMTX(std::string filename, const Format& format);

/// Read an mtx matrix from a stream.
TensorStorage readToStorageMTX(std::istream& stream, const ModeFormat& modetype);

/// Read an mtx matrix from a stream.
TensorStorage readToStorageMTX(std::istream& stream, const Format& format);

TensorStorage readToStorageSparse(std::istream& stream, const ModeFormat& modetype, 
                                  bool symm = false);
TensorStorage readToStorageDense(std::istream& stream, const ModeFormat& modetype, 
                                 bool symm = false);

TensorStorage readToStorageSparse(std::istream& stream, const Format& format, 
                                  bool symm = false);
TensorStorage readToStorageDense(std::istream& stream, const Format& format, 
                                 bool symm = false);

/// Write an mtx matrix to a file.
void writeMTX(std::string filename, const TensorBase& tensor);

/// Write an mtx matrix to a stream.
void writeMTX(std::ostream& stream, const TensorBase& tensor);
void writeSparse(std::ostream& stream, const TensorBase& tensor);
void writeDense(std::ostream& stream, const TensorBase& tensor);

/// Write an mtx matrix to a file.
void writeFromStorageMTX(std::string filename, const TensorStorage& storage);

/// Write an mtx matrix to a stream.
void writeFromStorageMTX(std::ostream& stream, const TensorStorage& storage);
void writeFromStorageSparse(std::ostream& stream, const TensorStorage& storage);
void writeFromStorageDense(std::ostream& stream, const TensorStorage& storage);

}

#endif
