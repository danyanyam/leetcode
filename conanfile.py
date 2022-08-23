from conan import ConanFile


class Example(ConanFile):
    name = "Example"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    generators = "cmake", "cmake_find_package"
    requires = [("gtest/cci.20210126"), ("fmt/9.0.0")]
