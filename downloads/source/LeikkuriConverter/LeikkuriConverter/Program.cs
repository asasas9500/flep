using System;
using System.IO;

namespace Application {
    static class Program {
        const string ExecutableFile = "tomb4.exe";
        const string PatchesFile = "patches.bin";
        const long CodePointer = 0x1000;
        const int CodeSize = 0xA5C89;
        const long DataPointer = 0xAB000;
        const int DataSize = 0x15000;

        static void Main(string[] args) {
            using (var Executable = new BinaryReader(File.Open(ExecutableFile, FileMode.Open, FileAccess.Read))) {
                using (var Patches = new BinaryWriter(File.Open(PatchesFile, FileMode.Open, FileAccess.Write))) {
                    Executable.BaseStream.Seek(CodePointer, SeekOrigin.Begin);
                    Patches.BaseStream.Seek(CodePointer, SeekOrigin.Begin);
                    Patches.Write(Executable.ReadBytes(CodeSize));
                    Executable.BaseStream.Seek(DataPointer, SeekOrigin.Begin);
                    Patches.BaseStream.Seek(DataPointer, SeekOrigin.Begin);
                    Patches.Write(Executable.ReadBytes(DataSize));
                }
            }
        }
    }
}
