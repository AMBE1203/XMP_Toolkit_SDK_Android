cmake_minimum_required(VERSION 3.4.1)
project(DemoUseNativeFile)




# Tạo thư viện từ các tệp C/C++ trong thư mục cpp/include
add_library(native-lib SHARED
        native-lib.cpp

        include/TXMPFiles.hpp
        include/TXMPIterator.hpp
        include/TXMPMeta.hpp
        include/TXMPUtils.hpp
        include/XMP.hpp
        include/XMP.incl_cpp
        include/XMP_Const.h
        include/XMP_Environment.h
        include/XMP_IO.hpp
        include/XMP_Version.h

        include/client-glue/WXMP_Common.hpp
        include/client-glue/WXMPFiles.hpp
        include/client-glue/WXMPIterator.hpp
        include/client-glue/WXMPMeta.hpp
        include/client-glue/WXMPUtils.hpp
        include/client-glue/TXMPUtils.incl_cpp
        include/client-glue/TXMPMeta.incl_cpp
        include/client-glue/TXMPIterator.incl_cpp
        include/client-glue/TXMPFiles.incl_cpp


        include/XMPCommon/XMPCommonDefines.h
        include/XMPCommon/XMPCommonErrorCodes.h
        include/XMPCommon/XMPCommonFwdDeclarations.h
        include/XMPCommon/XMPCommonLatestInterfaceVersions.h

        include/XMPCommon/Utilities/TWrapperFunctions.h
        include/XMPCommon/Utilities/TWrapperFunctions2.h


        include/XMPCommon/Interfaces/BaseInterfaces/IConfigurable.h
        include/XMPCommon/Interfaces/BaseInterfaces/ISharedObject.h
        include/XMPCommon/Interfaces/BaseInterfaces/IThreadSafe.h
        include/XMPCommon/Interfaces/BaseInterfaces/IVersionable.h

        include/XMPCommon/source/IConfigurable.cpp
        include/XMPCommon/source/IConfigurationManager.cpp
        include/XMPCommon/source/IError.cpp
        include/XMPCommon/source/IErrorNotifier.cpp
        include/XMPCommon/source/IUTF8String.cpp



        include/XMPCommon/Interfaces/IConfigurationManager.h
        include/XMPCommon/Interfaces/IError.h
        include/XMPCommon/Interfaces/IErrorNotifier.h
        include/XMPCommon/Interfaces/IMemoryAllocator.h
        include/XMPCommon/Interfaces/IObjectFactory.h
        include/XMPCommon/Interfaces/IUTF8String.h


        include/XMPCore/XMPCoreDefines.h
        include/XMPCore/XMPCoreErrorCodes.h
        include/XMPCore/XMPCoreFwdDeclarations.h
        include/XMPCore/XMPCoreLatestInterfaceVersions.h

        include/XMPCore/source/IArrayNode.cpp
        include/XMPCore/source/IClientDOMParser.cpp
        include/XMPCore/source/IClientDOMSerializer.cpp
        include/XMPCore/source/ICompositeNode.cpp
        include/XMPCore/source/ICoreConfigurationManager.cpp
        include/XMPCore/source/ICoreObjectFactory.cpp
        include/XMPCore/source/IDOMImplementationRegistry.cpp
        include/XMPCore/source/IDOMParser.cpp
        include/XMPCore/source/IDOMSerializer.cpp
        include/XMPCore/source/IMetadata.cpp
        include/XMPCore/source/IMetadataConverterUtils.cpp
        include/XMPCore/source/INameSpacePrefixMap.cpp
        include/XMPCore/source/INode.cpp
        include/XMPCore/source/INodeIterator.cpp
        include/XMPCore/source/IPath.cpp
        include/XMPCore/source/IPathSegment.cpp
        include/XMPCore/source/ISimpleNode.cpp
        include/XMPCore/source/IStructureNode.cpp

        include/XMPCore/Interfaces/IArrayNode.h
        include/XMPCore/Interfaces/IClientDOMParser.h
        include/XMPCore/Interfaces/IClientDOMSerializer.h
        include/XMPCore/Interfaces/ICompositeNode.h
        include/XMPCore/Interfaces/ICoreConfigurationManager.h
        include/XMPCore/Interfaces/ICoreObjectFactory.h
        include/XMPCore/Interfaces/IDOMImplementationRegistry.h
        include/XMPCore/Interfaces/IDOMParser.h
        include/XMPCore/Interfaces/IDOMSerializer.h
        include/XMPCore/Interfaces/IMetadata.h
        include/XMPCore/Interfaces/IMetadataConverterUtils.h
        include/XMPCore/Interfaces/INameSpacePrefixMap.h
        include/XMPCore/Interfaces/INode.h
        include/XMPCore/Interfaces/INodeIterator.h
        include/XMPCore/Interfaces/IPath.h
        include/XMPCore/Interfaces/IPathSegment.h
        include/XMPCore/Interfaces/ISimpleNode.h
        include/XMPCore/Interfaces/IStructureNode.h
        )


# Add the path to your header files
include_directories(
        include
        include/client-glue
        include/XMPCommon
        include/XMPCommon/Utilities
        include/XMPCommon/Interfaces/BaseInterfaces
        include/XMPCommon/source
        include/XMPCommon/Interfaces
        include/XMPCore
        include/XMPCore/source
        include/XMPCore/Interfaces

        include/TXMPFiles.hpp
        include/TXMPIterator.hpp
        include/TXMPMeta.hpp
        include/TXMPUtils.hpp
        include/XMP.hpp
        include/XMP.incl_cpp
        include/XMP_Const.h
        include/XMP_Environment.h
        include/XMP_IO.hpp
        include/XMP_Version.h

        include/client-glue/WXMP_Common.hpp
        include/client-glue/WXMPFiles.hpp
        include/client-glue/WXMPIterator.hpp
        include/client-glue/WXMPMeta.hpp
        include/client-glue/WXMPUtils.hpp
        include/client-glue/TXMPUtils.incl_cpp
        include/client-glue/TXMPMeta.incl_cpp
        include/client-glue/TXMPIterator.incl_cpp
        include/client-glue/TXMPFiles.incl_cpp


        include/XMPCommon/XMPCommonDefines.h
        include/XMPCommon/XMPCommonErrorCodes.h
        include/XMPCommon/XMPCommonFwdDeclarations.h
        include/XMPCommon/XMPCommonLatestInterfaceVersions.h

        include/XMPCommon/Utilities/TWrapperFunctions.h
        include/XMPCommon/Utilities/TWrapperFunctions2.h


        include/XMPCommon/Interfaces/BaseInterfaces/IConfigurable.h
        include/XMPCommon/Interfaces/BaseInterfaces/ISharedObject.h
        include/XMPCommon/Interfaces/BaseInterfaces/IThreadSafe.h
        include/XMPCommon/Interfaces/BaseInterfaces/IVersionable.h

        include/XMPCommon/source/IConfigurable.cpp
        include/XMPCommon/source/IConfigurationManager.cpp
        include/XMPCommon/source/IError.cpp
        include/XMPCommon/source/IErrorNotifier.cpp
        include/XMPCommon/source/IUTF8String.cpp



        include/XMPCommon/Interfaces/IConfigurationManager.h
        include/XMPCommon/Interfaces/IError.h
        include/XMPCommon/Interfaces/IErrorNotifier.h
        include/XMPCommon/Interfaces/IMemoryAllocator.h
        include/XMPCommon/Interfaces/IObjectFactory.h
        include/XMPCommon/Interfaces/IUTF8String.h


        include/XMPCore/XMPCoreDefines.h
        include/XMPCore/XMPCoreErrorCodes.h
        include/XMPCore/XMPCoreFwdDeclarations.h
        include/XMPCore/XMPCoreLatestInterfaceVersions.h

        include/XMPCore/source/IArrayNode.cpp
        include/XMPCore/source/IClientDOMParser.cpp
        include/XMPCore/source/IClientDOMSerializer.cpp
        include/XMPCore/source/ICompositeNode.cpp
        include/XMPCore/source/ICoreConfigurationManager.cpp
        include/XMPCore/source/ICoreObjectFactory.cpp
        include/XMPCore/source/IDOMImplementationRegistry.cpp
        include/XMPCore/source/IDOMParser.cpp
        include/XMPCore/source/IDOMSerializer.cpp
        include/XMPCore/source/IMetadata.cpp
        include/XMPCore/source/IMetadataConverterUtils.cpp
        include/XMPCore/source/INameSpacePrefixMap.cpp
        include/XMPCore/source/INode.cpp
        include/XMPCore/source/INodeIterator.cpp
        include/XMPCore/source/IPath.cpp
        include/XMPCore/source/IPathSegment.cpp
        include/XMPCore/source/ISimpleNode.cpp
        include/XMPCore/source/IStructureNode.cpp

        include/XMPCore/Interfaces/IArrayNode.h
        include/XMPCore/Interfaces/IClientDOMParser.h
        include/XMPCore/Interfaces/IClientDOMSerializer.h
        include/XMPCore/Interfaces/ICompositeNode.h
        include/XMPCore/Interfaces/ICoreConfigurationManager.h
        include/XMPCore/Interfaces/ICoreObjectFactory.h
        include/XMPCore/Interfaces/IDOMImplementationRegistry.h
        include/XMPCore/Interfaces/IDOMParser.h
        include/XMPCore/Interfaces/IDOMSerializer.h
        include/XMPCore/Interfaces/IMetadata.h
        include/XMPCore/Interfaces/IMetadataConverterUtils.h
        include/XMPCore/Interfaces/INameSpacePrefixMap.h
        include/XMPCore/Interfaces/INode.h
        include/XMPCore/Interfaces/INodeIterator.h
        include/XMPCore/Interfaces/IPath.h
        include/XMPCore/Interfaces/IPathSegment.h
        include/XMPCore/Interfaces/ISimpleNode.h
        include/XMPCore/Interfaces/IStructureNode.h
)



add_library(XMPCore SHARED IMPORTED)
add_library(XMPFiles SHARED IMPORTED)
add_library(c++_shared SHARED IMPORTED)
set_target_properties(XMPCore PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/jniLibs/${ANDROID_ABI}/libXMPCore.so)
set_target_properties(XMPFiles PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/jniLibs/${ANDROID_ABI}/libXMPFiles.so)
set_target_properties(c++_shared PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/jniLibs/${ANDROID_ABI}/libc++_shared.so)



target_link_libraries( native-lib XMPCore XMPFiles c++_shared ${log-lib} )









