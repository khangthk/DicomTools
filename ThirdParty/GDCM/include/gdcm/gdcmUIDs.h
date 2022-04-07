
// GENERATED FILE DO NOT EDIT
// $ xsltproc UIDToC++.xsl Part6.xml > gdcmUIDs.h

/*=========================================================================

  Program: GDCM (Grassroots DICOM). A DICOM library

  Copyright (c) 2006-2011 Mathieu Malaterre
  All rights reserved.
  See Copyright.txt or http://gdcm.sourceforge.net/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef GDCMUIDS_H
#define GDCMUIDS_H

#include "gdcmTypes.h"

namespace gdcm
{

/**
 * \brief all known uids
 */
class GDCM_EXPORT UIDs
{
public:
  typedef enum {
uid_1_2_840_10008_1_1 = 1, // Verification SOP Class
uid_1_2_840_10008_1_2 = 2, // Implicit VR Little Endian: Default Transfer Syntax for DICOM
uid_1_2_840_10008_1_2_1 = 3, // Explicit VR Little Endian
uid_1_2_840_10008_1_2_1_98 = 4, // Encapsulated Uncompressed Explicit VR Little Endian
uid_1_2_840_10008_1_2_1_99 = 5, // Deflated Explicit VR Little Endian
uid_1_2_840_10008_1_2_2 = 6, // Explicit VR Big Endian
uid_1_2_840_10008_1_2_4_50 = 7, // JPEG Baseline (Process 1): Default Transfer Syntax for Lossy JPEG 8 Bit Image Compression
uid_1_2_840_10008_1_2_4_51 = 8, // JPEG Extended (Process 2 & 4): Default Transfer Syntax for Lossy JPEG 12 Bit Image Compression (Process 4 only)
uid_1_2_840_10008_1_2_4_52 = 9, // JPEG Extended (Process 3 & 5)
uid_1_2_840_10008_1_2_4_53 = 10, // JPEG Spectral Selection, Non-Hierarchical (Process 6 & 8)
uid_1_2_840_10008_1_2_4_54 = 11, // JPEG Spectral Selection, Non-Hierarchical (Process 7 & 9)
uid_1_2_840_10008_1_2_4_55 = 12, // JPEG Full Progression, Non-Hierarchical (Process 10 & 12)
uid_1_2_840_10008_1_2_4_56 = 13, // JPEG Full Progression, Non-Hierarchical (Process 11 & 13)
uid_1_2_840_10008_1_2_4_57 = 14, // JPEG Lossless, Non-Hierarchical (Process 14)
uid_1_2_840_10008_1_2_4_58 = 15, // JPEG Lossless, Non-Hierarchical (Process 15)
uid_1_2_840_10008_1_2_4_59 = 16, // JPEG Extended, Hierarchical (Process 16 & 18)
uid_1_2_840_10008_1_2_4_60 = 17, // JPEG Extended, Hierarchical (Process 17 & 19)
uid_1_2_840_10008_1_2_4_61 = 18, // JPEG Spectral Selection, Hierarchical (Process 20 & 22)
uid_1_2_840_10008_1_2_4_62 = 19, // JPEG Spectral Selection, Hierarchical (Process 21 & 23)
uid_1_2_840_10008_1_2_4_63 = 20, // JPEG Full Progression, Hierarchical (Process 24 & 26)
uid_1_2_840_10008_1_2_4_64 = 21, // JPEG Full Progression, Hierarchical (Process 25 & 27)
uid_1_2_840_10008_1_2_4_65 = 22, // JPEG Lossless, Hierarchical (Process 28)
uid_1_2_840_10008_1_2_4_66 = 23, // JPEG Lossless, Hierarchical (Process 29)
uid_1_2_840_10008_1_2_4_70 = 24, // JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1]): Default Transfer Syntax for Lossless JPEG Image Compression
uid_1_2_840_10008_1_2_4_80 = 25, // JPEG-LS Lossless Image Compression
uid_1_2_840_10008_1_2_4_81 = 26, // JPEG-LS Lossy (Near-Lossless) Image Compression
uid_1_2_840_10008_1_2_4_90 = 27, // JPEG 2000 Image Compression (Lossless Only)
uid_1_2_840_10008_1_2_4_91 = 28, // JPEG 2000 Image Compression
uid_1_2_840_10008_1_2_4_92 = 29, // JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)
uid_1_2_840_10008_1_2_4_93 = 30, // JPEG 2000 Part 2 Multi-component Image Compression
uid_1_2_840_10008_1_2_4_94 = 31, // JPIP Referenced
uid_1_2_840_10008_1_2_4_95 = 32, // JPIP Referenced Deflate
uid_1_2_840_10008_1_2_4_100 = 33, // MPEG2 Main Profile / Main Level
uid_1_2_840_10008_1_2_4_101 = 34, // MPEG2 Main Profile / High Level
uid_1_2_840_10008_1_2_4_102 = 35, // MPEG-4 AVC/H.264 High Profile / Level 4.1
uid_1_2_840_10008_1_2_4_103 = 36, // MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1
uid_1_2_840_10008_1_2_4_104 = 37, // MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video
uid_1_2_840_10008_1_2_4_105 = 38, // MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video
uid_1_2_840_10008_1_2_4_106 = 39, // MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2
uid_1_2_840_10008_1_2_4_107 = 40, // HEVC/H.265 Main Profile / Level 5.1
uid_1_2_840_10008_1_2_4_108 = 41, // HEVC/H.265 Main 10 Profile / Level 5.1
uid_1_2_840_10008_1_2_5 = 42, // RLE Lossless
uid_1_2_840_10008_1_2_6_1 = 43, // RFC 2557 MIME encapsulation
uid_1_2_840_10008_1_2_6_2 = 44, // XML Encoding
uid_1_2_840_10008_1_2_7_1 = 45, // SMPTE ST 2110-20 Uncompressed Progressive Active Video
uid_1_2_840_10008_1_2_7_2 = 46, // SMPTE ST 2110-20 Uncompressed Interlaced Active Video
uid_1_2_840_10008_1_2_7_3 = 47, // SMPTE ST 2110-30 PCM Digital Audio
uid_1_2_840_10008_1_3_10 = 48, // Media Storage Directory Storage
uid_1_2_840_10008_1_5_1 = 49, // Hot Iron Color Palette SOP Instance
uid_1_2_840_10008_1_5_2 = 50, // PET Color Palette SOP Instance
uid_1_2_840_10008_1_5_3 = 51, // Hot Metal Blue Color Palette SOP Instance
uid_1_2_840_10008_1_5_4 = 52, // PET 20 Step Color Palette SOP Instance
uid_1_2_840_10008_1_5_5 = 53, // Spring Color Palette SOP Instance
uid_1_2_840_10008_1_5_6 = 54, // Summer Color Palette SOP Instance
uid_1_2_840_10008_1_5_7 = 55, // Fall Color Palette SOP Instance
uid_1_2_840_10008_1_5_8 = 56, // Winter Color Palette SOP Instance
uid_1_2_840_10008_1_9 = 57, // Basic Study Content Notification SOP Class
uid_1_2_840_10008_1_20 = 58, // Papyrus 3 Implicit VR Little Endian
uid_1_2_840_10008_1_20_1 = 59, // Storage Commitment Push Model SOP Class
uid_1_2_840_10008_1_20_1_1 = 60, // Storage Commitment Push Model SOP Instance
uid_1_2_840_10008_1_20_2 = 61, // Storage Commitment Pull Model SOP Class
uid_1_2_840_10008_1_20_2_1 = 62, // Storage Commitment Pull Model SOP Instance
uid_1_2_840_10008_1_40 = 63, // Procedural Event Logging SOP Class
uid_1_2_840_10008_1_40_1 = 64, // Procedural Event Logging SOP Instance
uid_1_2_840_10008_1_42 = 65, // Substance Administration Logging SOP Class
uid_1_2_840_10008_1_42_1 = 66, // Substance Administration Logging SOP Instance
uid_1_2_840_10008_2_6_1 = 67, // DICOM UID Registry
uid_1_2_840_10008_2_16_4 = 68, // DICOM Controlled Terminology
uid_1_2_840_10008_2_16_5 = 69, // Adult Mouse Anatomy Ontology
uid_1_2_840_10008_2_16_6 = 70, // Uberon Ontology
uid_1_2_840_10008_2_16_7 = 71, // Integrated Taxonomic Information System (ITIS) Taxonomic Serial Number (TSN)
uid_1_2_840_10008_2_16_8 = 72, // Mouse Genome Initiative (MGI)
uid_1_2_840_10008_2_16_9 = 73, // PubChem Compound CID
uid_1_2_840_10008_2_16_10 = 74, // Dublin Core
uid_1_2_840_10008_2_16_11 = 75, // New York University Melanoma Clinical Cooperative Group
uid_1_2_840_10008_2_16_12 = 76, // Mayo Clinic Non-radiological Images Specific Body Structure Anatomical Surface Region Guide
uid_1_2_840_10008_2_16_13 = 77, // Image Biomarker Standardisation Initiative
uid_1_2_840_10008_2_16_14 = 78, // Radiomics Ontology
uid_1_2_840_10008_2_16_15 = 79, // RadElement
uid_1_2_840_10008_2_16_16 = 80, // ICD-11
uid_1_2_840_10008_2_16_17 = 81, // Unified numbering system (UNS) for metals and alloys
uid_1_2_840_10008_2_16_18 = 82, // Research Resource Identification
uid_1_2_840_10008_3_1_1_1 = 83, // DICOM Application Context Name
uid_1_2_840_10008_3_1_2_1_1 = 84, // Detached Patient Management SOP Class
uid_1_2_840_10008_3_1_2_1_4 = 85, // Detached Patient Management Meta SOP Class
uid_1_2_840_10008_3_1_2_2_1 = 86, // Detached Visit Management SOP Class
uid_1_2_840_10008_3_1_2_3_1 = 87, // Detached Study Management SOP Class
uid_1_2_840_10008_3_1_2_3_2 = 88, // Study Component Management SOP Class
uid_1_2_840_10008_3_1_2_3_3 = 89, // Modality Performed Procedure Step SOP Class
uid_1_2_840_10008_3_1_2_3_4 = 90, // Modality Performed Procedure Step Retrieve SOP Class
uid_1_2_840_10008_3_1_2_3_5 = 91, // Modality Performed Procedure Step Notification SOP Class
uid_1_2_840_10008_3_1_2_5_1 = 92, // Detached Results Management SOP Class
uid_1_2_840_10008_3_1_2_5_4 = 93, // Detached Results Management Meta SOP Class
uid_1_2_840_10008_3_1_2_5_5 = 94, // Detached Study Management Meta SOP Class
uid_1_2_840_10008_3_1_2_6_1 = 95, // Detached Interpretation Management SOP Class
uid_1_2_840_10008_4_2 = 96, // Storage Service Class
uid_1_2_840_10008_5_1_1_1 = 97, // Basic Film Session SOP Class
uid_1_2_840_10008_5_1_1_2 = 98, // Basic Film Box SOP Class
uid_1_2_840_10008_5_1_1_4 = 99, // Basic Grayscale Image Box SOP Class
uid_1_2_840_10008_5_1_1_4_1 = 100, // Basic Color Image Box SOP Class
uid_1_2_840_10008_5_1_1_4_2 = 101, // Referenced Image Box SOP Class
uid_1_2_840_10008_5_1_1_9 = 102, // Basic Grayscale Print Management Meta SOP Class
uid_1_2_840_10008_5_1_1_9_1 = 103, // Referenced Grayscale Print Management Meta SOP Class
uid_1_2_840_10008_5_1_1_14 = 104, // Print Job SOP Class
uid_1_2_840_10008_5_1_1_15 = 105, // Basic Annotation Box SOP Class
uid_1_2_840_10008_5_1_1_16 = 106, // Printer SOP Class
uid_1_2_840_10008_5_1_1_16_376 = 107, // Printer Configuration Retrieval SOP Class
uid_1_2_840_10008_5_1_1_17 = 108, // Printer SOP Instance
uid_1_2_840_10008_5_1_1_17_376 = 109, // Printer Configuration Retrieval SOP Instance
uid_1_2_840_10008_5_1_1_18 = 110, // Basic Color Print Management Meta SOP Class
uid_1_2_840_10008_5_1_1_18_1 = 111, // Referenced Color Print Management Meta SOP Class
uid_1_2_840_10008_5_1_1_22 = 112, // VOI LUT Box SOP Class
uid_1_2_840_10008_5_1_1_23 = 113, // Presentation LUT SOP Class
uid_1_2_840_10008_5_1_1_24 = 114, // Image Overlay Box SOP Class
uid_1_2_840_10008_5_1_1_24_1 = 115, // Basic Print Image Overlay Box SOP Class
uid_1_2_840_10008_5_1_1_25 = 116, // Print Queue SOP Instance
uid_1_2_840_10008_5_1_1_26 = 117, // Print Queue Management SOP Class
uid_1_2_840_10008_5_1_1_27 = 118, // Stored Print Storage SOP Class
uid_1_2_840_10008_5_1_1_29 = 119, // Hardcopy Grayscale Image Storage SOP Class
uid_1_2_840_10008_5_1_1_30 = 120, // Hardcopy Color Image Storage SOP Class
uid_1_2_840_10008_5_1_1_31 = 121, // Pull Print Request SOP Class
uid_1_2_840_10008_5_1_1_32 = 122, // Pull Stored Print Management Meta SOP Class
uid_1_2_840_10008_5_1_1_33 = 123, // Media Creation Management SOP Class UID
uid_1_2_840_10008_5_1_1_40 = 124, // Display System SOP Class
uid_1_2_840_10008_5_1_1_40_1 = 125, // Display System SOP Instance
uid_1_2_840_10008_5_1_4_1_1_1 = 126, // Computed Radiography Image Storage
uid_1_2_840_10008_5_1_4_1_1_1_1 = 127, // Digital X-Ray Image Storage - For Presentation
uid_1_2_840_10008_5_1_4_1_1_1_1_1 = 128, // Digital X-Ray Image Storage - For Processing
uid_1_2_840_10008_5_1_4_1_1_1_2 = 129, // Digital Mammography X-Ray Image Storage - For Presentation
uid_1_2_840_10008_5_1_4_1_1_1_2_1 = 130, // Digital Mammography X-Ray Image Storage - For Processing
uid_1_2_840_10008_5_1_4_1_1_1_3 = 131, // Digital Intra-Oral X-Ray Image Storage - For Presentation
uid_1_2_840_10008_5_1_4_1_1_1_3_1 = 132, // Digital Intra-Oral X-Ray Image Storage - For Processing
uid_1_2_840_10008_5_1_4_1_1_2 = 133, // CT Image Storage
uid_1_2_840_10008_5_1_4_1_1_2_1 = 134, // Enhanced CT Image Storage
uid_1_2_840_10008_5_1_4_1_1_2_2 = 135, // Legacy Converted Enhanced CT Image Storage
uid_1_2_840_10008_5_1_4_1_1_3 = 136, // Ultrasound Multi-frame Image Storage
uid_1_2_840_10008_5_1_4_1_1_3_1 = 137, // Ultrasound Multi-frame Image Storage
uid_1_2_840_10008_5_1_4_1_1_4 = 138, // MR Image Storage
uid_1_2_840_10008_5_1_4_1_1_4_1 = 139, // Enhanced MR Image Storage
uid_1_2_840_10008_5_1_4_1_1_4_2 = 140, // MR Spectroscopy Storage
uid_1_2_840_10008_5_1_4_1_1_4_3 = 141, // Enhanced MR Color Image Storage
uid_1_2_840_10008_5_1_4_1_1_4_4 = 142, // Legacy Converted Enhanced MR Image Storage
uid_1_2_840_10008_5_1_4_1_1_5 = 143, // Nuclear Medicine Image Storage
uid_1_2_840_10008_5_1_4_1_1_6 = 144, // Ultrasound Image Storage
uid_1_2_840_10008_5_1_4_1_1_6_1 = 145, // Ultrasound Image Storage
uid_1_2_840_10008_5_1_4_1_1_6_2 = 146, // Enhanced US Volume Storage
uid_1_2_840_10008_5_1_4_1_1_7 = 147, // Secondary Capture Image Storage
uid_1_2_840_10008_5_1_4_1_1_7_1 = 148, // Multi-frame Single Bit Secondary Capture Image Storage
uid_1_2_840_10008_5_1_4_1_1_7_2 = 149, // Multi-frame Grayscale Byte Secondary Capture Image Storage
uid_1_2_840_10008_5_1_4_1_1_7_3 = 150, // Multi-frame Grayscale Word Secondary Capture Image Storage
uid_1_2_840_10008_5_1_4_1_1_7_4 = 151, // Multi-frame True Color Secondary Capture Image Storage
uid_1_2_840_10008_5_1_4_1_1_8 = 152, // Standalone Overlay Storage
uid_1_2_840_10008_5_1_4_1_1_9 = 153, // Standalone Curve Storage
uid_1_2_840_10008_5_1_4_1_1_9_1 = 154, // Waveform Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_9_1_1 = 155, // 12-lead ECG Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_1_2 = 156, // General ECG Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_1_3 = 157, // Ambulatory ECG Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_2_1 = 158, // Hemodynamic Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_3_1 = 159, // Cardiac Electrophysiology Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_4_1 = 160, // Basic Voice Audio Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_4_2 = 161, // General Audio Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_5_1 = 162, // Arterial Pulse Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_6_1 = 163, // Respiratory Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_6_2 = 164, // Multi-channel Respiratory Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_7_1 = 165, // Routine Scalp Electroencephalogram Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_7_2 = 166, // Electromyogram Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_7_3 = 167, // Electrooculogram Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_7_4 = 168, // Sleep Electroencephalogram Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_9_8_1 = 169, // Body Position Waveform Storage
uid_1_2_840_10008_5_1_4_1_1_10 = 170, // Standalone Modality LUT Storage
uid_1_2_840_10008_5_1_4_1_1_11 = 171, // Standalone VOI LUT Storage
uid_1_2_840_10008_5_1_4_1_1_11_1 = 172, // Grayscale Softcopy Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_2 = 173, // Color Softcopy Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_3 = 174, // Pseudo-Color Softcopy Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_4 = 175, // Blending Softcopy Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_5 = 176, // XA/XRF Grayscale Softcopy Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_6 = 177, // Grayscale Planar MPR Volumetric Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_7 = 178, // Compositing Planar MPR Volumetric Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_8 = 179, // Advanced Blending Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_9 = 180, // Volume Rendering Volumetric Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_10 = 181, // Segmented Volume Rendering Volumetric Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_11_11 = 182, // Multiple Volume Rendering Volumetric Presentation State Storage
uid_1_2_840_10008_5_1_4_1_1_12_1 = 183, // X-Ray Angiographic Image Storage
uid_1_2_840_10008_5_1_4_1_1_12_1_1 = 184, // Enhanced XA Image Storage
uid_1_2_840_10008_5_1_4_1_1_12_2 = 185, // X-Ray Radiofluoroscopic Image Storage
uid_1_2_840_10008_5_1_4_1_1_12_2_1 = 186, // Enhanced XRF Image Storage
uid_1_2_840_10008_5_1_4_1_1_12_3 = 187, // X-Ray Angiographic Bi-Plane Image Storage
uid_1_2_840_10008_5_1_4_1_1_12_77 = 188, // 
uid_1_2_840_10008_5_1_4_1_1_13_1_1 = 189, // X-Ray 3D Angiographic Image Storage
uid_1_2_840_10008_5_1_4_1_1_13_1_2 = 190, // X-Ray 3D Craniofacial Image Storage
uid_1_2_840_10008_5_1_4_1_1_13_1_3 = 191, // Breast Tomosynthesis Image Storage
uid_1_2_840_10008_5_1_4_1_1_13_1_4 = 192, // Breast Projection X-Ray Image Storage - For Presentation
uid_1_2_840_10008_5_1_4_1_1_13_1_5 = 193, // Breast Projection X-Ray Image Storage - For Processing
uid_1_2_840_10008_5_1_4_1_1_14_1 = 194, // Intravascular Optical Coherence Tomography Image Storage - For Presentation
uid_1_2_840_10008_5_1_4_1_1_14_2 = 195, // Intravascular Optical Coherence Tomography Image Storage - For Processing
uid_1_2_840_10008_5_1_4_1_1_20 = 196, // Nuclear Medicine Image Storage
uid_1_2_840_10008_5_1_4_1_1_30 = 197, // Parametric Map Storage
uid_1_2_840_10008_5_1_4_1_1_40 = 198, // 
uid_1_2_840_10008_5_1_4_1_1_66 = 199, // Raw Data Storage
uid_1_2_840_10008_5_1_4_1_1_66_1 = 200, // Spatial Registration Storage
uid_1_2_840_10008_5_1_4_1_1_66_2 = 201, // Spatial Fiducials Storage
uid_1_2_840_10008_5_1_4_1_1_66_3 = 202, // Deformable Spatial Registration Storage
uid_1_2_840_10008_5_1_4_1_1_66_4 = 203, // Segmentation Storage
uid_1_2_840_10008_5_1_4_1_1_66_5 = 204, // Surface Segmentation Storage
uid_1_2_840_10008_5_1_4_1_1_66_6 = 205, // Tractography Results Storage
uid_1_2_840_10008_5_1_4_1_1_67 = 206, // Real World Value Mapping Storage
uid_1_2_840_10008_5_1_4_1_1_68_1 = 207, // Surface Scan Mesh Storage
uid_1_2_840_10008_5_1_4_1_1_68_2 = 208, // Surface Scan Point Cloud Storage
uid_1_2_840_10008_5_1_4_1_1_77_1 = 209, // VL Image Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_77_2 = 210, // VL Multi-frame Image Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_77_1_1 = 211, // VL Endoscopic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_1_1 = 212, // Video Endoscopic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_2 = 213, // VL Microscopic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_2_1 = 214, // Video Microscopic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_3 = 215, // VL Slide-Coordinates Microscopic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_4 = 216, // VL Photographic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_4_1 = 217, // Video Photographic Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_1 = 218, // Ophthalmic Photography 8 Bit Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_2 = 219, // Ophthalmic Photography 16 Bit Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_3 = 220, // Stereometric Relationship Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_4 = 221, // Ophthalmic Tomography Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_5 = 222, // Wide Field Ophthalmic Photography Stereographic Projection Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_6 = 223, // Wide Field Ophthalmic Photography 3D Coordinates Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_7 = 224, // Ophthalmic Optical Coherence Tomography En Face Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_5_8 = 225, // Ophthalmic Optical Coherence Tomography B-scan Volume Analysis Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_6 = 226, // VL Whole Slide Microscopy Image Storage
uid_1_2_840_10008_5_1_4_1_1_77_1_7 = 227, // Dermoscopic Photography Image Storage
uid_1_2_840_10008_5_1_4_1_1_78_1 = 228, // Lensometry Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_78_2 = 229, // Autorefraction Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_78_3 = 230, // Keratometry Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_78_4 = 231, // Subjective Refraction Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_78_5 = 232, // Visual Acuity Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_78_6 = 233, // Spectacle Prescription Report Storage
uid_1_2_840_10008_5_1_4_1_1_78_7 = 234, // Ophthalmic Axial Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_78_8 = 235, // Intraocular Lens Calculations Storage
uid_1_2_840_10008_5_1_4_1_1_79_1 = 236, // Macular Grid Thickness and Volume Report Storage
uid_1_2_840_10008_5_1_4_1_1_80_1 = 237, // Ophthalmic Visual Field Static Perimetry Measurements Storage
uid_1_2_840_10008_5_1_4_1_1_81_1 = 238, // Ophthalmic Thickness Map Storage
uid_1_2_840_10008_5_1_4_1_1_82_1 = 239, // Corneal Topography Map Storage
uid_1_2_840_10008_5_1_4_1_1_88_1 = 240, // Text SR Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_88_2 = 241, // Audio SR Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_88_3 = 242, // Detail SR Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_88_4 = 243, // Comprehensive SR Storage - Trial
uid_1_2_840_10008_5_1_4_1_1_88_11 = 244, // Basic Text SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_22 = 245, // Enhanced SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_33 = 246, // Comprehensive SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_34 = 247, // Comprehensive 3D SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_35 = 248, // Extensible SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_40 = 249, // Procedure Log Storage
uid_1_2_840_10008_5_1_4_1_1_88_50 = 250, // Mammography CAD SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_59 = 251, // Key Object Selection Document Storage
uid_1_2_840_10008_5_1_4_1_1_88_65 = 252, // Chest CAD SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_67 = 253, // X-Ray Radiation Dose SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_68 = 254, // Radiopharmaceutical Radiation Dose SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_69 = 255, // Colon CAD SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_70 = 256, // Implantation Plan SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_71 = 257, // Acquisition Context SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_72 = 258, // Simplified Adult Echo SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_73 = 259, // Patient Radiation Dose SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_74 = 260, // Planned Imaging Agent Administration SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_75 = 261, // Performed Imaging Agent Administration SR Storage
uid_1_2_840_10008_5_1_4_1_1_88_76 = 262, // Enhanced X-Ray Radiation Dose SR Storage
uid_1_2_840_10008_5_1_4_1_1_90_1 = 263, // Content Assessment Results Storage
uid_1_2_840_10008_5_1_4_1_1_91_1 = 264, // Microscopy Bulk Simple Annotations Storage
uid_1_2_840_10008_5_1_4_1_1_104_1 = 265, // Encapsulated PDF Storage
uid_1_2_840_10008_5_1_4_1_1_104_2 = 266, // Encapsulated CDA Storage
uid_1_2_840_10008_5_1_4_1_1_104_3 = 267, // Encapsulated STL Storage
uid_1_2_840_10008_5_1_4_1_1_104_4 = 268, // Encapsulated OBJ Storage
uid_1_2_840_10008_5_1_4_1_1_104_5 = 269, // Encapsulated MTL Storage
uid_1_2_840_10008_5_1_4_1_1_128 = 270, // Positron Emission Tomography Image Storage
uid_1_2_840_10008_5_1_4_1_1_128_1 = 271, // Legacy Converted Enhanced PET Image Storage
uid_1_2_840_10008_5_1_4_1_1_129 = 272, // Standalone PET Curve Storage
uid_1_2_840_10008_5_1_4_1_1_130 = 273, // Enhanced PET Image Storage
uid_1_2_840_10008_5_1_4_1_1_131 = 274, // Basic Structured Display Storage
uid_1_2_840_10008_5_1_4_1_1_200_1 = 275, // CT Defined Procedure Protocol Storage
uid_1_2_840_10008_5_1_4_1_1_200_2 = 276, // CT Performed Procedure Protocol Storage
uid_1_2_840_10008_5_1_4_1_1_200_3 = 277, // Protocol Approval Storage
uid_1_2_840_10008_5_1_4_1_1_200_4 = 278, // Protocol Approval Information Model - FIND
uid_1_2_840_10008_5_1_4_1_1_200_5 = 279, // Protocol Approval Information Model - MOVE
uid_1_2_840_10008_5_1_4_1_1_200_6 = 280, // Protocol Approval Information Model - GET
uid_1_2_840_10008_5_1_4_1_1_200_7 = 281, // XA Defined Procedure Protocol Storage
uid_1_2_840_10008_5_1_4_1_1_200_8 = 282, // XA Performed Procedure Protocol Storage
uid_1_2_840_10008_5_1_4_1_1_481_1 = 283, // RT Image Storage
uid_1_2_840_10008_5_1_4_1_1_481_2 = 284, // RT Dose Storage
uid_1_2_840_10008_5_1_4_1_1_481_3 = 285, // RT Structure Set Storage
uid_1_2_840_10008_5_1_4_1_1_481_4 = 286, // RT Beams Treatment Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_5 = 287, // RT Plan Storage
uid_1_2_840_10008_5_1_4_1_1_481_6 = 288, // RT Brachy Treatment Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_7 = 289, // RT Treatment Summary Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_8 = 290, // RT Ion Plan Storage
uid_1_2_840_10008_5_1_4_1_1_481_9 = 291, // RT Ion Beams Treatment Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_10 = 292, // RT Physician Intent Storage
uid_1_2_840_10008_5_1_4_1_1_481_11 = 293, // RT Segment Annotation Storage
uid_1_2_840_10008_5_1_4_1_1_481_12 = 294, // RT Radiation Set Storage
uid_1_2_840_10008_5_1_4_1_1_481_13 = 295, // C-Arm Photon-Electron Radiation Storage
uid_1_2_840_10008_5_1_4_1_1_481_14 = 296, // Tomotherapeutic Radiation Storage
uid_1_2_840_10008_5_1_4_1_1_481_15 = 297, // Robotic-Arm Radiation Storage
uid_1_2_840_10008_5_1_4_1_1_481_16 = 298, // RT Radiation Record Set Storage
uid_1_2_840_10008_5_1_4_1_1_481_17 = 299, // RT Radiation Salvage Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_18 = 300, // Tomotherapeutic Radiation Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_19 = 301, // C-Arm Photon-Electron Radiation Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_20 = 302, // Robotic Radiation Record Storage
uid_1_2_840_10008_5_1_4_1_1_481_21 = 303, // RT Radiation Set Delivery Instruction Storage
uid_1_2_840_10008_5_1_4_1_1_481_22 = 304, // RT Treatment Preparation Storage
uid_1_2_840_10008_5_1_4_1_1_501_1 = 305, // DICOS CT Image Storage
uid_1_2_840_10008_5_1_4_1_1_501_2_1 = 306, // DICOS Digital X-Ray Image Storage - For Presentation
uid_1_2_840_10008_5_1_4_1_1_501_2_2 = 307, // DICOS Digital X-Ray Image Storage - For Processing
uid_1_2_840_10008_5_1_4_1_1_501_3 = 308, // DICOS Threat Detection Report Storage
uid_1_2_840_10008_5_1_4_1_1_501_4 = 309, // DICOS 2D AIT Storage
uid_1_2_840_10008_5_1_4_1_1_501_5 = 310, // DICOS 3D AIT Storage
uid_1_2_840_10008_5_1_4_1_1_501_6 = 311, // DICOS Quadrupole Resonance (QR) Storage
uid_1_2_840_10008_5_1_4_1_1_601_1 = 312, // Eddy Current Image Storage
uid_1_2_840_10008_5_1_4_1_1_601_2 = 313, // Eddy Current Multi-frame Image Storage
uid_1_2_840_10008_5_1_4_1_2_1_1 = 314, // Patient Root Query/Retrieve Information Model - FIND
uid_1_2_840_10008_5_1_4_1_2_1_2 = 315, // Patient Root Query/Retrieve Information Model - MOVE
uid_1_2_840_10008_5_1_4_1_2_1_3 = 316, // Patient Root Query/Retrieve Information Model - GET
uid_1_2_840_10008_5_1_4_1_2_2_1 = 317, // Study Root Query/Retrieve Information Model - FIND
uid_1_2_840_10008_5_1_4_1_2_2_2 = 318, // Study Root Query/Retrieve Information Model - MOVE
uid_1_2_840_10008_5_1_4_1_2_2_3 = 319, // Study Root Query/Retrieve Information Model - GET
uid_1_2_840_10008_5_1_4_1_2_3_1 = 320, // Patient/Study Only Query/Retrieve Information Model - FIND
uid_1_2_840_10008_5_1_4_1_2_3_2 = 321, // Patient/Study Only Query/Retrieve Information Model - MOVE
uid_1_2_840_10008_5_1_4_1_2_3_3 = 322, // Patient/Study Only Query/Retrieve Information Model - GET
uid_1_2_840_10008_5_1_4_1_2_4_2 = 323, // Composite Instance Root Retrieve - MOVE
uid_1_2_840_10008_5_1_4_1_2_4_3 = 324, // Composite Instance Root Retrieve - GET
uid_1_2_840_10008_5_1_4_1_2_5_3 = 325, // Composite Instance Retrieve Without Bulk Data - GET
uid_1_2_840_10008_5_1_4_20_1 = 326, // Defined Procedure Protocol Information Model - FIND
uid_1_2_840_10008_5_1_4_20_2 = 327, // Defined Procedure Protocol Information Model - MOVE
uid_1_2_840_10008_5_1_4_20_3 = 328, // Defined Procedure Protocol Information Model - GET
uid_1_2_840_10008_5_1_4_31 = 329, // Modality Worklist Information Model - FIND
uid_1_2_840_10008_5_1_4_32 = 330, // General Purpose Worklist Management Meta SOP Class
uid_1_2_840_10008_5_1_4_32_1 = 331, // General Purpose Worklist Information Model - FIND
uid_1_2_840_10008_5_1_4_32_2 = 332, // General Purpose Scheduled Procedure Step SOP Class
uid_1_2_840_10008_5_1_4_32_3 = 333, // General Purpose Performed Procedure Step SOP Class
uid_1_2_840_10008_5_1_4_33 = 334, // Instance Availability Notification SOP Class
uid_1_2_840_10008_5_1_4_34_1 = 335, // RT Beams Delivery Instruction Storage - Trial
uid_1_2_840_10008_5_1_4_34_2 = 336, // RT Conventional Machine Verification - Trial
uid_1_2_840_10008_5_1_4_34_3 = 337, // RT Ion Machine Verification - Trial
uid_1_2_840_10008_5_1_4_34_4 = 338, // Unified Worklist and Procedure Step Service Class - Trial
uid_1_2_840_10008_5_1_4_34_4_1 = 339, // Unified Procedure Step - Push SOP Class - Trial
uid_1_2_840_10008_5_1_4_34_4_2 = 340, // Unified Procedure Step - Watch SOP Class - Trial
uid_1_2_840_10008_5_1_4_34_4_3 = 341, // Unified Procedure Step - Pull SOP Class - Trial
uid_1_2_840_10008_5_1_4_34_4_4 = 342, // Unified Procedure Step - Event SOP Class - Trial
uid_1_2_840_10008_5_1_4_34_5 = 343, // UPS Global Subscription SOP Instance
uid_1_2_840_10008_5_1_4_34_5_1 = 344, // UPS Filtered Global Subscription SOP Instance
uid_1_2_840_10008_5_1_4_34_6 = 345, // Unified Worklist and Procedure Step Service Class
uid_1_2_840_10008_5_1_4_34_6_1 = 346, // Unified Procedure Step - Push SOP Class
uid_1_2_840_10008_5_1_4_34_6_2 = 347, // Unified Procedure Step - Watch SOP Class
uid_1_2_840_10008_5_1_4_34_6_3 = 348, // Unified Procedure Step - Pull SOP Class
uid_1_2_840_10008_5_1_4_34_6_4 = 349, // Unified Procedure Step - Event SOP Class
uid_1_2_840_10008_5_1_4_34_6_5 = 350, // Unified Procedure Step - Query SOP Class
uid_1_2_840_10008_5_1_4_34_7 = 351, // RT Beams Delivery Instruction Storage
uid_1_2_840_10008_5_1_4_34_8 = 352, // RT Conventional Machine Verification
uid_1_2_840_10008_5_1_4_34_9 = 353, // RT Ion Machine Verification
uid_1_2_840_10008_5_1_4_34_10 = 354, // RT Brachy Application Setup Delivery Instruction Storage
uid_1_2_840_10008_5_1_4_37_1 = 355, // General Relevant Patient Information Query
uid_1_2_840_10008_5_1_4_37_2 = 356, // Breast Imaging Relevant Patient Information Query
uid_1_2_840_10008_5_1_4_37_3 = 357, // Cardiac Relevant Patient Information Query
uid_1_2_840_10008_5_1_4_38_1 = 358, // Hanging Protocol Storage
uid_1_2_840_10008_5_1_4_38_2 = 359, // Hanging Protocol Information Model - FIND
uid_1_2_840_10008_5_1_4_38_3 = 360, // Hanging Protocol Information Model - MOVE
uid_1_2_840_10008_5_1_4_38_4 = 361, // Hanging Protocol Information Model - GET
uid_1_2_840_10008_5_1_4_39_1 = 362, // Color Palette Storage
uid_1_2_840_10008_5_1_4_39_2 = 363, // Color Palette Query/Retrieve Information Model - FIND
uid_1_2_840_10008_5_1_4_39_3 = 364, // Color Palette Query/Retrieve Information Model - MOVE
uid_1_2_840_10008_5_1_4_39_4 = 365, // Color Palette Query/Retrieve Information Model - GET
uid_1_2_840_10008_5_1_4_41 = 366, // Product Characteristics Query SOP Class
uid_1_2_840_10008_5_1_4_42 = 367, // Substance Approval Query SOP Class
uid_1_2_840_10008_5_1_4_43_1 = 368, // Generic Implant Template Storage
uid_1_2_840_10008_5_1_4_43_2 = 369, // Generic Implant Template Information Model - FIND
uid_1_2_840_10008_5_1_4_43_3 = 370, // Generic Implant Template Information Model - MOVE
uid_1_2_840_10008_5_1_4_43_4 = 371, // Generic Implant Template Information Model - GET
uid_1_2_840_10008_5_1_4_44_1 = 372, // Implant Assembly Template Storage
uid_1_2_840_10008_5_1_4_44_2 = 373, // Implant Assembly Template Information Model - FIND
uid_1_2_840_10008_5_1_4_44_3 = 374, // Implant Assembly Template Information Model - MOVE
uid_1_2_840_10008_5_1_4_44_4 = 375, // Implant Assembly Template Information Model - GET
uid_1_2_840_10008_5_1_4_45_1 = 376, // Implant Template Group Storage
uid_1_2_840_10008_5_1_4_45_2 = 377, // Implant Template Group Information Model - FIND
uid_1_2_840_10008_5_1_4_45_3 = 378, // Implant Template Group Information Model - MOVE
uid_1_2_840_10008_5_1_4_45_4 = 379, // Implant Template Group Information Model - GET
uid_1_2_840_10008_7_1_1 = 380, // Native DICOM Model
uid_1_2_840_10008_7_1_2 = 381, // Abstract Multi-Dimensional Image Model
uid_1_2_840_10008_8_1_1 = 382, // DICOM Content Mapping Resource
uid_1_2_840_10008_10_1 = 383, // Video Endoscopic Image Real-Time Communication
uid_1_2_840_10008_10_2 = 384, // Video Photographic Image Real-Time Communication
uid_1_2_840_10008_10_3 = 385, // Audio Waveform Real-Time Communication
uid_1_2_840_10008_10_4 = 386, // Rendition Selection Document Real-Time Communication
uid_1_2_840_10008_15_0_3_1 = 387, // dicomDeviceName
uid_1_2_840_10008_15_0_3_2 = 388, // dicomDescription
uid_1_2_840_10008_15_0_3_3 = 389, // dicomManufacturer
uid_1_2_840_10008_15_0_3_4 = 390, // dicomManufacturerModelName
uid_1_2_840_10008_15_0_3_5 = 391, // dicomSoftwareVersion
uid_1_2_840_10008_15_0_3_6 = 392, // dicomVendorData
uid_1_2_840_10008_15_0_3_7 = 393, // dicomAETitle
uid_1_2_840_10008_15_0_3_8 = 394, // dicomNetworkConnectionReference
uid_1_2_840_10008_15_0_3_9 = 395, // dicomApplicationCluster
uid_1_2_840_10008_15_0_3_10 = 396, // dicomAssociationInitiator
uid_1_2_840_10008_15_0_3_11 = 397, // dicomAssociationAcceptor
uid_1_2_840_10008_15_0_3_12 = 398, // dicomHostname
uid_1_2_840_10008_15_0_3_13 = 399, // dicomPort
uid_1_2_840_10008_15_0_3_14 = 400, // dicomSOPClass
uid_1_2_840_10008_15_0_3_15 = 401, // dicomTransferRole
uid_1_2_840_10008_15_0_3_16 = 402, // dicomTransferSyntax
uid_1_2_840_10008_15_0_3_17 = 403, // dicomPrimaryDeviceType
uid_1_2_840_10008_15_0_3_18 = 404, // dicomRelatedDeviceReference
uid_1_2_840_10008_15_0_3_19 = 405, // dicomPreferredCalledAETitle
uid_1_2_840_10008_15_0_3_20 = 406, // dicomTLSCyphersuite
uid_1_2_840_10008_15_0_3_21 = 407, // dicomAuthorizedNodeCertificateReference
uid_1_2_840_10008_15_0_3_22 = 408, // dicomThisNodeCertificateReference
uid_1_2_840_10008_15_0_3_23 = 409, // dicomInstalled
uid_1_2_840_10008_15_0_3_24 = 410, // dicomStationName
uid_1_2_840_10008_15_0_3_25 = 411, // dicomDeviceSerialNumber
uid_1_2_840_10008_15_0_3_26 = 412, // dicomInstitutionName
uid_1_2_840_10008_15_0_3_27 = 413, // dicomInstitutionAddress
uid_1_2_840_10008_15_0_3_28 = 414, // dicomInstitutionDepartmentName
uid_1_2_840_10008_15_0_3_29 = 415, // dicomIssuerOfPatientID
uid_1_2_840_10008_15_0_3_30 = 416, // dicomPreferredCallingAETitle
uid_1_2_840_10008_15_0_3_31 = 417, // dicomSupportedCharacterSet
uid_1_2_840_10008_15_0_4_1 = 418, // dicomConfigurationRoot
uid_1_2_840_10008_15_0_4_2 = 419, // dicomDevicesRoot
uid_1_2_840_10008_15_0_4_3 = 420, // dicomUniqueAETitlesRegistryRoot
uid_1_2_840_10008_15_0_4_4 = 421, // dicomDevice
uid_1_2_840_10008_15_0_4_5 = 422, // dicomNetworkAE
uid_1_2_840_10008_15_0_4_6 = 423, // dicomNetworkConnection
uid_1_2_840_10008_15_0_4_7 = 424, // dicomUniqueAETitle
uid_1_2_840_10008_15_0_4_8 = 425, // dicomTransferCapability
uid_1_2_840_10008_15_1_1 = 426, // Universal Coordinated Time
frameref_1_2_840_10008_1_4_1_1 = 427, // Talairach Brain Atlas Frame of Reference
frameref_1_2_840_10008_1_4_1_2 = 428, // SPM2 T1 Frame of Reference
frameref_1_2_840_10008_1_4_1_3 = 429, // SPM2 T2 Frame of Reference
frameref_1_2_840_10008_1_4_1_4 = 430, // SPM2 PD Frame of Reference
frameref_1_2_840_10008_1_4_1_5 = 431, // SPM2 EPI Frame of Reference
frameref_1_2_840_10008_1_4_1_6 = 432, // SPM2 FIL T1 Frame of Reference
frameref_1_2_840_10008_1_4_1_7 = 433, // SPM2 PET Frame of Reference
frameref_1_2_840_10008_1_4_1_8 = 434, // SPM2 TRANSM Frame of Reference
frameref_1_2_840_10008_1_4_1_9 = 435, // SPM2 SPECT Frame of Reference
frameref_1_2_840_10008_1_4_1_10 = 436, // SPM2 GRAY Frame of Reference
frameref_1_2_840_10008_1_4_1_11 = 437, // SPM2 WHITE Frame of Reference
frameref_1_2_840_10008_1_4_1_12 = 438, // SPM2 CSF Frame of Reference
frameref_1_2_840_10008_1_4_1_13 = 439, // SPM2 BRAINMASK Frame of Reference
frameref_1_2_840_10008_1_4_1_14 = 440, // SPM2 AVG305T1 Frame of Reference
frameref_1_2_840_10008_1_4_1_15 = 441, // SPM2 AVG152T1 Frame of Reference
frameref_1_2_840_10008_1_4_1_16 = 442, // SPM2 AVG152T2 Frame of Reference
frameref_1_2_840_10008_1_4_1_17 = 443, // SPM2 AVG152PD Frame of Reference
frameref_1_2_840_10008_1_4_1_18 = 444, // SPM2 SINGLESUBJT1 Frame of Reference
frameref_1_2_840_10008_1_4_2_1 = 445, // ICBM 452 T1 Frame of Reference
frameref_1_2_840_10008_1_4_2_2 = 446, // ICBM Single Subject MRI Frame of Reference
frameref_1_2_840_10008_1_4_3_1 = 447, // IEC 61217 Fixed Coordinate System Frame of Reference
frameref_1_2_840_10008_1_4_3_2 = 448, // Standard Robotic-Arm Coordinate System Frame of Reference
frameref_1_2_840_10008_1_4_3_3 = 449, // IEC 61217 Table Top Coordinate System Frame of Reference
frameref_1_2_840_10008_1_4_4_1 = 450, // SRI24 Frame of Reference
frameref_1_2_840_10008_1_4_5_1 = 451, // Colin27 Frame of Reference
frameref_1_2_840_10008_1_4_6_1 = 452, // LPBA40/AIR Frame of Reference
frameref_1_2_840_10008_1_4_6_2 = 453, // LPBA40/FLIRT Frame of Reference
frameref_1_2_840_10008_1_4_6_3 = 454, // LPBA40/SPM5 Frame of Reference
//
//
/////////////////////////////////////////

/////////////////////////////////////////
//
// Private UIDs
//

uid_1_2_840_113619_4_2,
uid_1_2_840_113619_4_3,
uid_1_3_12_2_1107_5_9_1,
uid_1_2_840_113619_4_26,
uid_1_2_840_113619_4_30,
uid_2_16_840_1_113709_1_5_1,
uid_2_16_840_1_113709_1_2_2,
uid_1_2_840_113543_6_6_1_3_10002,
uid_1_2_392_200036_9116_7_8_1_1_1,
uid_1_2_392_200036_9125_1_1_2,
uid_1_2_840_113619_4_27,
uid_1_3_46_670589_11_0_0_12_1,
uid_1_3_46_670589_11_0_0_12_2,
uid_1_3_46_670589_11_0_0_12_4,
uid_1_3_46_670589_2_3_1_1,
uid_1_3_46_670589_2_4_1_1,
uid_1_3_46_670589_2_5_1_1,
uid_1_3_46_670589_5_0_1,
uid_1_3_46_670589_5_0_1_1,
uid_1_3_46_670589_5_0_10,
uid_1_3_46_670589_5_0_11,
uid_1_3_46_670589_5_0_11_1,
uid_1_3_46_670589_5_0_12,
uid_1_3_46_670589_5_0_13,
uid_1_3_46_670589_5_0_14,
uid_1_3_46_670589_5_0_2,
uid_1_3_46_670589_5_0_2_1,
uid_1_3_46_670589_5_0_3,
uid_1_3_46_670589_5_0_3_1,
uid_1_3_46_670589_5_0_4,
uid_1_3_46_670589_5_0_7,
uid_1_3_46_670589_5_0_8,
uid_1_3_46_670589_5_0_9,
uid_1_2_752_24_3_7_6,
uid_1_2_752_24_3_7_7,
uid_1_2_840_113619_5_2,
uid_1_3_46_670589_33_1_4_1,
uid_1_2_276_0_7230010_3_1_0_1
//
//
/////////////////////////////////////////

} TSType;
  typedef enum {
VerificationSOPClass = 1, // Verification SOP Class
ImplicitVRLittleEndianDefaultTransferSyntaxforDICOM = 2, // Implicit VR Little Endian: Default Transfer Syntax for DICOM
ExplicitVRLittleEndian = 3, // Explicit VR Little Endian
EncapsulatedUncompressedExplicitVRLittleEndian = 4, // Encapsulated Uncompressed Explicit VR Little Endian
DeflatedExplicitVRLittleEndian = 5, // Deflated Explicit VR Little Endian
ExplicitVRBigEndianRetired = 6, // Explicit VR Big Endian
JPEGBaselineProcess1DefaultTransferSyntaxforLossyJPEG8BitImageCompression = 7, // JPEG Baseline (Process 1): Default Transfer Syntax for Lossy JPEG 8 Bit Image Compression
JPEGExtendedProcess24DefaultTransferSyntaxforLossyJPEG12BitImageCompressionProcess4only = 8, // JPEG Extended (Process 2 & 4): Default Transfer Syntax for Lossy JPEG 12 Bit Image Compression (Process 4 only)
JPEGExtendedProcess35Retired = 9, // JPEG Extended (Process 3 & 5)
JPEGSpectralSelectionNonHierarchicalProcess68Retired = 10, // JPEG Spectral Selection, Non-Hierarchical (Process 6 & 8)
JPEGSpectralSelectionNonHierarchicalProcess79Retired = 11, // JPEG Spectral Selection, Non-Hierarchical (Process 7 & 9)
JPEGFullProgressionNonHierarchicalProcess1012Retired = 12, // JPEG Full Progression, Non-Hierarchical (Process 10 & 12)
JPEGFullProgressionNonHierarchicalProcess1113Retired = 13, // JPEG Full Progression, Non-Hierarchical (Process 11 & 13)
JPEGLosslessNonHierarchicalProcess14 = 14, // JPEG Lossless, Non-Hierarchical (Process 14)
JPEGLosslessNonHierarchicalProcess15Retired = 15, // JPEG Lossless, Non-Hierarchical (Process 15)
JPEGExtendedHierarchicalProcess1618Retired = 16, // JPEG Extended, Hierarchical (Process 16 & 18)
JPEGExtendedHierarchicalProcess1719Retired = 17, // JPEG Extended, Hierarchical (Process 17 & 19)
JPEGSpectralSelectionHierarchicalProcess2022Retired = 18, // JPEG Spectral Selection, Hierarchical (Process 20 & 22)
JPEGSpectralSelectionHierarchicalProcess2123Retired = 19, // JPEG Spectral Selection, Hierarchical (Process 21 & 23)
JPEGFullProgressionHierarchicalProcess2426Retired = 20, // JPEG Full Progression, Hierarchical (Process 24 & 26)
JPEGFullProgressionHierarchicalProcess2527Retired = 21, // JPEG Full Progression, Hierarchical (Process 25 & 27)
JPEGLosslessHierarchicalProcess28Retired = 22, // JPEG Lossless, Hierarchical (Process 28)
JPEGLosslessHierarchicalProcess29Retired = 23, // JPEG Lossless, Hierarchical (Process 29)
JPEGLosslessNonHierarchicalFirstOrderPredictionProcess14SelectionValue1DefaultTransferSyntaxforLosslessJPEGImageCompression = 24, // JPEG Lossless, Non-Hierarchical, First-Order Prediction (Process 14 [Selection Value 1]): Default Transfer Syntax for Lossless JPEG Image Compression
JPEGLSLosslessImageCompression = 25, // JPEG-LS Lossless Image Compression
JPEGLSLossyNearLosslessImageCompression = 26, // JPEG-LS Lossy (Near-Lossless) Image Compression
JPEG2000ImageCompressionLosslessOnly = 27, // JPEG 2000 Image Compression (Lossless Only)
JPEG2000ImageCompression = 28, // JPEG 2000 Image Compression
JPEG2000Part2MulticomponentImageCompressionLosslessOnly = 29, // JPEG 2000 Part 2 Multi-component Image Compression (Lossless Only)
JPEG2000Part2MulticomponentImageCompression = 30, // JPEG 2000 Part 2 Multi-component Image Compression
JPIPReferenced = 31, // JPIP Referenced
JPIPReferencedDeflate = 32, // JPIP Referenced Deflate
MPEG2MainProfileMainLevel = 33, // MPEG2 Main Profile / Main Level
MPEG2MainProfileHighLevel = 34, // MPEG2 Main Profile / High Level
MPEG4AVCH_264HighProfileLevel4_1 = 35, // MPEG-4 AVC/H.264 High Profile / Level 4.1
MPEG4AVCH_264BDcompatibleHighProfileLevel4_1 = 36, // MPEG-4 AVC/H.264 BD-compatible High Profile / Level 4.1
MPEG4AVCH_264HighProfileLevel4_2For2DVideo = 37, // MPEG-4 AVC/H.264 High Profile / Level 4.2 For 2D Video
MPEG4AVCH_264HighProfileLevel4_2For3DVideo = 38, // MPEG-4 AVC/H.264 High Profile / Level 4.2 For 3D Video
MPEG4AVCH_264StereoHighProfileLevel4_2 = 39, // MPEG-4 AVC/H.264 Stereo High Profile / Level 4.2
HEVCH_265MainProfileLevel5_1 = 40, // HEVC/H.265 Main Profile / Level 5.1
HEVCH_265Main10ProfileLevel5_1 = 41, // HEVC/H.265 Main 10 Profile / Level 5.1
RLELossless = 42, // RLE Lossless
RFC2557MIMEencapsulationRetired = 43, // RFC 2557 MIME encapsulation
XMLEncodingRetired = 44, // XML Encoding
SMPTEST211020UncompressedProgressiveActiveVideo = 45, // SMPTE ST 2110-20 Uncompressed Progressive Active Video
SMPTEST211020UncompressedInterlacedActiveVideo = 46, // SMPTE ST 2110-20 Uncompressed Interlaced Active Video
SMPTEST211030PCMDigitalAudio = 47, // SMPTE ST 2110-30 PCM Digital Audio
MediaStorageDirectoryStorage = 48, // Media Storage Directory Storage
HotIronColorPaletteSOPInstance = 49, // Hot Iron Color Palette SOP Instance
PETColorPaletteSOPInstance = 50, // PET Color Palette SOP Instance
HotMetalBlueColorPaletteSOPInstance = 51, // Hot Metal Blue Color Palette SOP Instance
PET20StepColorPaletteSOPInstance = 52, // PET 20 Step Color Palette SOP Instance
SpringColorPaletteSOPInstance = 53, // Spring Color Palette SOP Instance
SummerColorPaletteSOPInstance = 54, // Summer Color Palette SOP Instance
FallColorPaletteSOPInstance = 55, // Fall Color Palette SOP Instance
WinterColorPaletteSOPInstance = 56, // Winter Color Palette SOP Instance
BasicStudyContentNotificationSOPClassRetired = 57, // Basic Study Content Notification SOP Class
Papyrus3ImplicitVRLittleEndianRetired = 58, // Papyrus 3 Implicit VR Little Endian
StorageCommitmentPushModelSOPClass = 59, // Storage Commitment Push Model SOP Class
StorageCommitmentPushModelSOPInstance = 60, // Storage Commitment Push Model SOP Instance
StorageCommitmentPullModelSOPClassRetired = 61, // Storage Commitment Pull Model SOP Class
StorageCommitmentPullModelSOPInstanceRetired = 62, // Storage Commitment Pull Model SOP Instance
ProceduralEventLoggingSOPClass = 63, // Procedural Event Logging SOP Class
ProceduralEventLoggingSOPInstance = 64, // Procedural Event Logging SOP Instance
SubstanceAdministrationLoggingSOPClass = 65, // Substance Administration Logging SOP Class
SubstanceAdministrationLoggingSOPInstance = 66, // Substance Administration Logging SOP Instance
DICOMUIDRegistry = 67, // DICOM UID Registry
DICOMControlledTerminology = 68, // DICOM Controlled Terminology
AdultMouseAnatomyOntology = 69, // Adult Mouse Anatomy Ontology
UberonOntology = 70, // Uberon Ontology
IntegratedTaxonomicInformationSystemITISTaxonomicSerialNumberTSN = 71, // Integrated Taxonomic Information System (ITIS) Taxonomic Serial Number (TSN)
MouseGenomeInitiativeMGI = 72, // Mouse Genome Initiative (MGI)
PubChemCompoundCID = 73, // PubChem Compound CID
DublinCore = 74, // Dublin Core
NewYorkUniversityMelanomaClinicalCooperativeGroup = 75, // New York University Melanoma Clinical Cooperative Group
MayoClinicNonradiologicalImagesSpecificBodyStructureAnatomicalSurfaceRegionGuide = 76, // Mayo Clinic Non-radiological Images Specific Body Structure Anatomical Surface Region Guide
ImageBiomarkerStandardisationInitiative = 77, // Image Biomarker Standardisation Initiative
RadiomicsOntology = 78, // Radiomics Ontology
RadElement = 79, // RadElement
ICD11 = 80, // ICD-11
UnifiednumberingsystemUNSformetalsandalloys = 81, // Unified numbering system (UNS) for metals and alloys
ResearchResourceIdentification = 82, // Research Resource Identification
DICOMApplicationContextName = 83, // DICOM Application Context Name
DetachedPatientManagementSOPClassRetired = 84, // Detached Patient Management SOP Class
DetachedPatientManagementMetaSOPClassRetired = 85, // Detached Patient Management Meta SOP Class
DetachedVisitManagementSOPClassRetired = 86, // Detached Visit Management SOP Class
DetachedStudyManagementSOPClassRetired = 87, // Detached Study Management SOP Class
StudyComponentManagementSOPClassRetired = 88, // Study Component Management SOP Class
ModalityPerformedProcedureStepSOPClass = 89, // Modality Performed Procedure Step SOP Class
ModalityPerformedProcedureStepRetrieveSOPClass = 90, // Modality Performed Procedure Step Retrieve SOP Class
ModalityPerformedProcedureStepNotificationSOPClass = 91, // Modality Performed Procedure Step Notification SOP Class
DetachedResultsManagementSOPClassRetired = 92, // Detached Results Management SOP Class
DetachedResultsManagementMetaSOPClassRetired = 93, // Detached Results Management Meta SOP Class
DetachedStudyManagementMetaSOPClassRetired = 94, // Detached Study Management Meta SOP Class
DetachedInterpretationManagementSOPClassRetired = 95, // Detached Interpretation Management SOP Class
StorageServiceClass = 96, // Storage Service Class
BasicFilmSessionSOPClass = 97, // Basic Film Session SOP Class
BasicFilmBoxSOPClass = 98, // Basic Film Box SOP Class
BasicGrayscaleImageBoxSOPClass = 99, // Basic Grayscale Image Box SOP Class
BasicColorImageBoxSOPClass = 100, // Basic Color Image Box SOP Class
ReferencedImageBoxSOPClassRetired = 101, // Referenced Image Box SOP Class
BasicGrayscalePrintManagementMetaSOPClass = 102, // Basic Grayscale Print Management Meta SOP Class
ReferencedGrayscalePrintManagementMetaSOPClassRetired = 103, // Referenced Grayscale Print Management Meta SOP Class
PrintJobSOPClass = 104, // Print Job SOP Class
BasicAnnotationBoxSOPClass = 105, // Basic Annotation Box SOP Class
PrinterSOPClass = 106, // Printer SOP Class
PrinterConfigurationRetrievalSOPClass = 107, // Printer Configuration Retrieval SOP Class
PrinterSOPInstance = 108, // Printer SOP Instance
PrinterConfigurationRetrievalSOPInstance = 109, // Printer Configuration Retrieval SOP Instance
BasicColorPrintManagementMetaSOPClass = 110, // Basic Color Print Management Meta SOP Class
ReferencedColorPrintManagementMetaSOPClassRetired = 111, // Referenced Color Print Management Meta SOP Class
VOILUTBoxSOPClass = 112, // VOI LUT Box SOP Class
PresentationLUTSOPClass = 113, // Presentation LUT SOP Class
ImageOverlayBoxSOPClassRetired = 114, // Image Overlay Box SOP Class
BasicPrintImageOverlayBoxSOPClassRetired = 115, // Basic Print Image Overlay Box SOP Class
PrintQueueSOPInstanceRetired = 116, // Print Queue SOP Instance
PrintQueueManagementSOPClassRetired = 117, // Print Queue Management SOP Class
StoredPrintStorageSOPClassRetired = 118, // Stored Print Storage SOP Class
HardcopyGrayscaleImageStorageSOPClassRetired = 119, // Hardcopy Grayscale Image Storage SOP Class
HardcopyColorImageStorageSOPClassRetired = 120, // Hardcopy Color Image Storage SOP Class
PullPrintRequestSOPClassRetired = 121, // Pull Print Request SOP Class
PullStoredPrintManagementMetaSOPClassRetired = 122, // Pull Stored Print Management Meta SOP Class
MediaCreationManagementSOPClassUID = 123, // Media Creation Management SOP Class UID
DisplaySystemSOPClass = 124, // Display System SOP Class
DisplaySystemSOPInstance = 125, // Display System SOP Instance
ComputedRadiographyImageStorage = 126, // Computed Radiography Image Storage
DigitalXRayImageStorageForPresentation = 127, // Digital X-Ray Image Storage - For Presentation
DigitalXRayImageStorageForProcessing = 128, // Digital X-Ray Image Storage - For Processing
DigitalMammographyXRayImageStorageForPresentation = 129, // Digital Mammography X-Ray Image Storage - For Presentation
DigitalMammographyXRayImageStorageForProcessing = 130, // Digital Mammography X-Ray Image Storage - For Processing
DigitalIntraOralXRayImageStorageForPresentation = 131, // Digital Intra-Oral X-Ray Image Storage - For Presentation
DigitalIntraOralXRayImageStorageForProcessing = 132, // Digital Intra-Oral X-Ray Image Storage - For Processing
CTImageStorage = 133, // CT Image Storage
EnhancedCTImageStorage = 134, // Enhanced CT Image Storage
LegacyConvertedEnhancedCTImageStorage = 135, // Legacy Converted Enhanced CT Image Storage
UltrasoundMultiframeImageStorageRetired = 136, // Ultrasound Multi-frame Image Storage
UltrasoundMultiframeImageStorage = 137, // Ultrasound Multi-frame Image Storage
MRImageStorage = 138, // MR Image Storage
EnhancedMRImageStorage = 139, // Enhanced MR Image Storage
MRSpectroscopyStorage = 140, // MR Spectroscopy Storage
EnhancedMRColorImageStorage = 141, // Enhanced MR Color Image Storage
LegacyConvertedEnhancedMRImageStorage = 142, // Legacy Converted Enhanced MR Image Storage
NuclearMedicineImageStorageRetired = 143, // Nuclear Medicine Image Storage
UltrasoundImageStorageRetired = 144, // Ultrasound Image Storage
UltrasoundImageStorage = 145, // Ultrasound Image Storage
EnhancedUSVolumeStorage = 146, // Enhanced US Volume Storage
SecondaryCaptureImageStorage = 147, // Secondary Capture Image Storage
MultiframeSingleBitSecondaryCaptureImageStorage = 148, // Multi-frame Single Bit Secondary Capture Image Storage
MultiframeGrayscaleByteSecondaryCaptureImageStorage = 149, // Multi-frame Grayscale Byte Secondary Capture Image Storage
MultiframeGrayscaleWordSecondaryCaptureImageStorage = 150, // Multi-frame Grayscale Word Secondary Capture Image Storage
MultiframeTrueColorSecondaryCaptureImageStorage = 151, // Multi-frame True Color Secondary Capture Image Storage
StandaloneOverlayStorageRetired = 152, // Standalone Overlay Storage
StandaloneCurveStorageRetired = 153, // Standalone Curve Storage
WaveformStorageTrialRetired = 154, // Waveform Storage - Trial
ECG12leadWaveformStorage = 155, // 12-lead ECG Waveform Storage
GeneralECGWaveformStorage = 156, // General ECG Waveform Storage
AmbulatoryECGWaveformStorage = 157, // Ambulatory ECG Waveform Storage
HemodynamicWaveformStorage = 158, // Hemodynamic Waveform Storage
CardiacElectrophysiologyWaveformStorage = 159, // Cardiac Electrophysiology Waveform Storage
BasicVoiceAudioWaveformStorage = 160, // Basic Voice Audio Waveform Storage
GeneralAudioWaveformStorage = 161, // General Audio Waveform Storage
ArterialPulseWaveformStorage = 162, // Arterial Pulse Waveform Storage
RespiratoryWaveformStorage = 163, // Respiratory Waveform Storage
MultichannelRespiratoryWaveformStorage = 164, // Multi-channel Respiratory Waveform Storage
RoutineScalpElectroencephalogramWaveformStorage = 165, // Routine Scalp Electroencephalogram Waveform Storage
ElectromyogramWaveformStorage = 166, // Electromyogram Waveform Storage
ElectrooculogramWaveformStorage = 167, // Electrooculogram Waveform Storage
SleepElectroencephalogramWaveformStorage = 168, // Sleep Electroencephalogram Waveform Storage
BodyPositionWaveformStorage = 169, // Body Position Waveform Storage
StandaloneModalityLUTStorageRetired = 170, // Standalone Modality LUT Storage
StandaloneVOILUTStorageRetired = 171, // Standalone VOI LUT Storage
GrayscaleSoftcopyPresentationStateStorage = 172, // Grayscale Softcopy Presentation State Storage
ColorSoftcopyPresentationStateStorage = 173, // Color Softcopy Presentation State Storage
PseudoColorSoftcopyPresentationStateStorage = 174, // Pseudo-Color Softcopy Presentation State Storage
BlendingSoftcopyPresentationStateStorage = 175, // Blending Softcopy Presentation State Storage
XAXRFGrayscaleSoftcopyPresentationStateStorage = 176, // XA/XRF Grayscale Softcopy Presentation State Storage
GrayscalePlanarMPRVolumetricPresentationStateStorage = 177, // Grayscale Planar MPR Volumetric Presentation State Storage
CompositingPlanarMPRVolumetricPresentationStateStorage = 178, // Compositing Planar MPR Volumetric Presentation State Storage
AdvancedBlendingPresentationStateStorage = 179, // Advanced Blending Presentation State Storage
VolumeRenderingVolumetricPresentationStateStorage = 180, // Volume Rendering Volumetric Presentation State Storage
SegmentedVolumeRenderingVolumetricPresentationStateStorage = 181, // Segmented Volume Rendering Volumetric Presentation State Storage
MultipleVolumeRenderingVolumetricPresentationStateStorage = 182, // Multiple Volume Rendering Volumetric Presentation State Storage
XRayAngiographicImageStorage = 183, // X-Ray Angiographic Image Storage
EnhancedXAImageStorage = 184, // Enhanced XA Image Storage
XRayRadiofluoroscopicImageStorage = 185, // X-Ray Radiofluoroscopic Image Storage
EnhancedXRFImageStorage = 186, // Enhanced XRF Image Storage
XRayAngiographicBiPlaneImageStorageRetired = 187, // X-Ray Angiographic Bi-Plane Image Storage
Retired0 = 188, // 
XRay3DAngiographicImageStorage = 189, // X-Ray 3D Angiographic Image Storage
XRay3DCraniofacialImageStorage = 190, // X-Ray 3D Craniofacial Image Storage
BreastTomosynthesisImageStorage = 191, // Breast Tomosynthesis Image Storage
BreastProjectionXRayImageStorageForPresentation = 192, // Breast Projection X-Ray Image Storage - For Presentation
BreastProjectionXRayImageStorageForProcessing = 193, // Breast Projection X-Ray Image Storage - For Processing
IntravascularOpticalCoherenceTomographyImageStorageForPresentation = 194, // Intravascular Optical Coherence Tomography Image Storage - For Presentation
IntravascularOpticalCoherenceTomographyImageStorageForProcessing = 195, // Intravascular Optical Coherence Tomography Image Storage - For Processing
NuclearMedicineImageStorage = 196, // Nuclear Medicine Image Storage
ParametricMapStorage = 197, // Parametric Map Storage
Retired1 = 198, // 
RawDataStorage = 199, // Raw Data Storage
SpatialRegistrationStorage = 200, // Spatial Registration Storage
SpatialFiducialsStorage = 201, // Spatial Fiducials Storage
DeformableSpatialRegistrationStorage = 202, // Deformable Spatial Registration Storage
SegmentationStorage = 203, // Segmentation Storage
SurfaceSegmentationStorage = 204, // Surface Segmentation Storage
TractographyResultsStorage = 205, // Tractography Results Storage
RealWorldValueMappingStorage = 206, // Real World Value Mapping Storage
SurfaceScanMeshStorage = 207, // Surface Scan Mesh Storage
SurfaceScanPointCloudStorage = 208, // Surface Scan Point Cloud Storage
VLImageStorageTrialRetired = 209, // VL Image Storage - Trial
VLMultiframeImageStorageTrialRetired = 210, // VL Multi-frame Image Storage - Trial
VLEndoscopicImageStorage = 211, // VL Endoscopic Image Storage
VideoEndoscopicImageStorage = 212, // Video Endoscopic Image Storage
VLMicroscopicImageStorage = 213, // VL Microscopic Image Storage
VideoMicroscopicImageStorage = 214, // Video Microscopic Image Storage
VLSlideCoordinatesMicroscopicImageStorage = 215, // VL Slide-Coordinates Microscopic Image Storage
VLPhotographicImageStorage = 216, // VL Photographic Image Storage
VideoPhotographicImageStorage = 217, // Video Photographic Image Storage
OphthalmicPhotography8BitImageStorage = 218, // Ophthalmic Photography 8 Bit Image Storage
OphthalmicPhotography16BitImageStorage = 219, // Ophthalmic Photography 16 Bit Image Storage
StereometricRelationshipStorage = 220, // Stereometric Relationship Storage
OphthalmicTomographyImageStorage = 221, // Ophthalmic Tomography Image Storage
WideFieldOphthalmicPhotographyStereographicProjectionImageStorage = 222, // Wide Field Ophthalmic Photography Stereographic Projection Image Storage
WideFieldOphthalmicPhotography3DCoordinatesImageStorage = 223, // Wide Field Ophthalmic Photography 3D Coordinates Image Storage
OphthalmicOpticalCoherenceTomographyEnFaceImageStorage = 224, // Ophthalmic Optical Coherence Tomography En Face Image Storage
OphthalmicOpticalCoherenceTomographyBscanVolumeAnalysisStorage = 225, // Ophthalmic Optical Coherence Tomography B-scan Volume Analysis Storage
VLWholeSlideMicroscopyImageStorage = 226, // VL Whole Slide Microscopy Image Storage
DermoscopicPhotographyImageStorage = 227, // Dermoscopic Photography Image Storage
LensometryMeasurementsStorage = 228, // Lensometry Measurements Storage
AutorefractionMeasurementsStorage = 229, // Autorefraction Measurements Storage
KeratometryMeasurementsStorage = 230, // Keratometry Measurements Storage
SubjectiveRefractionMeasurementsStorage = 231, // Subjective Refraction Measurements Storage
VisualAcuityMeasurementsStorage = 232, // Visual Acuity Measurements Storage
SpectaclePrescriptionReportStorage = 233, // Spectacle Prescription Report Storage
OphthalmicAxialMeasurementsStorage = 234, // Ophthalmic Axial Measurements Storage
IntraocularLensCalculationsStorage = 235, // Intraocular Lens Calculations Storage
MacularGridThicknessandVolumeReportStorage = 236, // Macular Grid Thickness and Volume Report Storage
OphthalmicVisualFieldStaticPerimetryMeasurementsStorage = 237, // Ophthalmic Visual Field Static Perimetry Measurements Storage
OphthalmicThicknessMapStorage = 238, // Ophthalmic Thickness Map Storage
CornealTopographyMapStorage = 239, // Corneal Topography Map Storage
TextSRStorageTrialRetired = 240, // Text SR Storage - Trial
AudioSRStorageTrialRetired = 241, // Audio SR Storage - Trial
DetailSRStorageTrialRetired = 242, // Detail SR Storage - Trial
ComprehensiveSRStorageTrialRetired = 243, // Comprehensive SR Storage - Trial
BasicTextSRStorage = 244, // Basic Text SR Storage
EnhancedSRStorage = 245, // Enhanced SR Storage
ComprehensiveSRStorage = 246, // Comprehensive SR Storage
Comprehensive3DSRStorage = 247, // Comprehensive 3D SR Storage
ExtensibleSRStorage = 248, // Extensible SR Storage
ProcedureLogStorage = 249, // Procedure Log Storage
MammographyCADSRStorage = 250, // Mammography CAD SR Storage
KeyObjectSelectionDocumentStorage = 251, // Key Object Selection Document Storage
ChestCADSRStorage = 252, // Chest CAD SR Storage
XRayRadiationDoseSRStorage = 253, // X-Ray Radiation Dose SR Storage
RadiopharmaceuticalRadiationDoseSRStorage = 254, // Radiopharmaceutical Radiation Dose SR Storage
ColonCADSRStorage = 255, // Colon CAD SR Storage
ImplantationPlanSRStorage = 256, // Implantation Plan SR Storage
AcquisitionContextSRStorage = 257, // Acquisition Context SR Storage
SimplifiedAdultEchoSRStorage = 258, // Simplified Adult Echo SR Storage
PatientRadiationDoseSRStorage = 259, // Patient Radiation Dose SR Storage
PlannedImagingAgentAdministrationSRStorage = 260, // Planned Imaging Agent Administration SR Storage
PerformedImagingAgentAdministrationSRStorage = 261, // Performed Imaging Agent Administration SR Storage
EnhancedXRayRadiationDoseSRStorage = 262, // Enhanced X-Ray Radiation Dose SR Storage
ContentAssessmentResultsStorage = 263, // Content Assessment Results Storage
MicroscopyBulkSimpleAnnotationsStorage = 264, // Microscopy Bulk Simple Annotations Storage
EncapsulatedPDFStorage = 265, // Encapsulated PDF Storage
EncapsulatedCDAStorage = 266, // Encapsulated CDA Storage
EncapsulatedSTLStorage = 267, // Encapsulated STL Storage
EncapsulatedOBJStorage = 268, // Encapsulated OBJ Storage
EncapsulatedMTLStorage = 269, // Encapsulated MTL Storage
PositronEmissionTomographyImageStorage = 270, // Positron Emission Tomography Image Storage
LegacyConvertedEnhancedPETImageStorage = 271, // Legacy Converted Enhanced PET Image Storage
StandalonePETCurveStorageRetired = 272, // Standalone PET Curve Storage
EnhancedPETImageStorage = 273, // Enhanced PET Image Storage
BasicStructuredDisplayStorage = 274, // Basic Structured Display Storage
CTDefinedProcedureProtocolStorage = 275, // CT Defined Procedure Protocol Storage
CTPerformedProcedureProtocolStorage = 276, // CT Performed Procedure Protocol Storage
ProtocolApprovalStorage = 277, // Protocol Approval Storage
ProtocolApprovalInformationModelFIND = 278, // Protocol Approval Information Model - FIND
ProtocolApprovalInformationModelMOVE = 279, // Protocol Approval Information Model - MOVE
ProtocolApprovalInformationModelGET = 280, // Protocol Approval Information Model - GET
XADefinedProcedureProtocolStorage = 281, // XA Defined Procedure Protocol Storage
XAPerformedProcedureProtocolStorage = 282, // XA Performed Procedure Protocol Storage
RTImageStorage = 283, // RT Image Storage
RTDoseStorage = 284, // RT Dose Storage
RTStructureSetStorage = 285, // RT Structure Set Storage
RTBeamsTreatmentRecordStorage = 286, // RT Beams Treatment Record Storage
RTPlanStorage = 287, // RT Plan Storage
RTBrachyTreatmentRecordStorage = 288, // RT Brachy Treatment Record Storage
RTTreatmentSummaryRecordStorage = 289, // RT Treatment Summary Record Storage
RTIonPlanStorage = 290, // RT Ion Plan Storage
RTIonBeamsTreatmentRecordStorage = 291, // RT Ion Beams Treatment Record Storage
RTPhysicianIntentStorage = 292, // RT Physician Intent Storage
RTSegmentAnnotationStorage = 293, // RT Segment Annotation Storage
RTRadiationSetStorage = 294, // RT Radiation Set Storage
CArmPhotonElectronRadiationStorage = 295, // C-Arm Photon-Electron Radiation Storage
TomotherapeuticRadiationStorage = 296, // Tomotherapeutic Radiation Storage
RoboticArmRadiationStorage = 297, // Robotic-Arm Radiation Storage
RTRadiationRecordSetStorage = 298, // RT Radiation Record Set Storage
RTRadiationSalvageRecordStorage = 299, // RT Radiation Salvage Record Storage
TomotherapeuticRadiationRecordStorage = 300, // Tomotherapeutic Radiation Record Storage
CArmPhotonElectronRadiationRecordStorage = 301, // C-Arm Photon-Electron Radiation Record Storage
RoboticRadiationRecordStorage = 302, // Robotic Radiation Record Storage
RTRadiationSetDeliveryInstructionStorage = 303, // RT Radiation Set Delivery Instruction Storage
RTTreatmentPreparationStorage = 304, // RT Treatment Preparation Storage
DICOSCTImageStorage = 305, // DICOS CT Image Storage
DICOSDigitalXRayImageStorageForPresentation = 306, // DICOS Digital X-Ray Image Storage - For Presentation
DICOSDigitalXRayImageStorageForProcessing = 307, // DICOS Digital X-Ray Image Storage - For Processing
DICOSThreatDetectionReportStorage = 308, // DICOS Threat Detection Report Storage
DICOS2DAITStorage = 309, // DICOS 2D AIT Storage
DICOS3DAITStorage = 310, // DICOS 3D AIT Storage
DICOSQuadrupoleResonanceQRStorage = 311, // DICOS Quadrupole Resonance (QR) Storage
EddyCurrentImageStorage = 312, // Eddy Current Image Storage
EddyCurrentMultiframeImageStorage = 313, // Eddy Current Multi-frame Image Storage
PatientRootQueryRetrieveInformationModelFIND = 314, // Patient Root Query/Retrieve Information Model - FIND
PatientRootQueryRetrieveInformationModelMOVE = 315, // Patient Root Query/Retrieve Information Model - MOVE
PatientRootQueryRetrieveInformationModelGET = 316, // Patient Root Query/Retrieve Information Model - GET
StudyRootQueryRetrieveInformationModelFIND = 317, // Study Root Query/Retrieve Information Model - FIND
StudyRootQueryRetrieveInformationModelMOVE = 318, // Study Root Query/Retrieve Information Model - MOVE
StudyRootQueryRetrieveInformationModelGET = 319, // Study Root Query/Retrieve Information Model - GET
PatientStudyOnlyQueryRetrieveInformationModelFINDRetired = 320, // Patient/Study Only Query/Retrieve Information Model - FIND
PatientStudyOnlyQueryRetrieveInformationModelMOVERetired = 321, // Patient/Study Only Query/Retrieve Information Model - MOVE
PatientStudyOnlyQueryRetrieveInformationModelGETRetired = 322, // Patient/Study Only Query/Retrieve Information Model - GET
CompositeInstanceRootRetrieveMOVE = 323, // Composite Instance Root Retrieve - MOVE
CompositeInstanceRootRetrieveGET = 324, // Composite Instance Root Retrieve - GET
CompositeInstanceRetrieveWithoutBulkDataGET = 325, // Composite Instance Retrieve Without Bulk Data - GET
DefinedProcedureProtocolInformationModelFIND = 326, // Defined Procedure Protocol Information Model - FIND
DefinedProcedureProtocolInformationModelMOVE = 327, // Defined Procedure Protocol Information Model - MOVE
DefinedProcedureProtocolInformationModelGET = 328, // Defined Procedure Protocol Information Model - GET
ModalityWorklistInformationModelFIND = 329, // Modality Worklist Information Model - FIND
GeneralPurposeWorklistManagementMetaSOPClassRetired = 330, // General Purpose Worklist Management Meta SOP Class
GeneralPurposeWorklistInformationModelFINDRetired = 331, // General Purpose Worklist Information Model - FIND
GeneralPurposeScheduledProcedureStepSOPClassRetired = 332, // General Purpose Scheduled Procedure Step SOP Class
GeneralPurposePerformedProcedureStepSOPClassRetired = 333, // General Purpose Performed Procedure Step SOP Class
InstanceAvailabilityNotificationSOPClass = 334, // Instance Availability Notification SOP Class
RTBeamsDeliveryInstructionStorageTrialRetired = 335, // RT Beams Delivery Instruction Storage - Trial
RTConventionalMachineVerificationTrialRetired = 336, // RT Conventional Machine Verification - Trial
RTIonMachineVerificationTrialRetired = 337, // RT Ion Machine Verification - Trial
UnifiedWorklistandProcedureStepServiceClassTrialRetired = 338, // Unified Worklist and Procedure Step Service Class - Trial
UnifiedProcedureStepPushSOPClassTrialRetired = 339, // Unified Procedure Step - Push SOP Class - Trial
UnifiedProcedureStepWatchSOPClassTrialRetired = 340, // Unified Procedure Step - Watch SOP Class - Trial
UnifiedProcedureStepPullSOPClassTrialRetired = 341, // Unified Procedure Step - Pull SOP Class - Trial
UnifiedProcedureStepEventSOPClassTrialRetired = 342, // Unified Procedure Step - Event SOP Class - Trial
UPSGlobalSubscriptionSOPInstance = 343, // UPS Global Subscription SOP Instance
UPSFilteredGlobalSubscriptionSOPInstance = 344, // UPS Filtered Global Subscription SOP Instance
UnifiedWorklistandProcedureStepServiceClass = 345, // Unified Worklist and Procedure Step Service Class
UnifiedProcedureStepPushSOPClass = 346, // Unified Procedure Step - Push SOP Class
UnifiedProcedureStepWatchSOPClass = 347, // Unified Procedure Step - Watch SOP Class
UnifiedProcedureStepPullSOPClass = 348, // Unified Procedure Step - Pull SOP Class
UnifiedProcedureStepEventSOPClass = 349, // Unified Procedure Step - Event SOP Class
UnifiedProcedureStepQuerySOPClass = 350, // Unified Procedure Step - Query SOP Class
RTBeamsDeliveryInstructionStorage = 351, // RT Beams Delivery Instruction Storage
RTConventionalMachineVerification = 352, // RT Conventional Machine Verification
RTIonMachineVerification = 353, // RT Ion Machine Verification
RTBrachyApplicationSetupDeliveryInstructionStorage = 354, // RT Brachy Application Setup Delivery Instruction Storage
GeneralRelevantPatientInformationQuery = 355, // General Relevant Patient Information Query
BreastImagingRelevantPatientInformationQuery = 356, // Breast Imaging Relevant Patient Information Query
CardiacRelevantPatientInformationQuery = 357, // Cardiac Relevant Patient Information Query
HangingProtocolStorage = 358, // Hanging Protocol Storage
HangingProtocolInformationModelFIND = 359, // Hanging Protocol Information Model - FIND
HangingProtocolInformationModelMOVE = 360, // Hanging Protocol Information Model - MOVE
HangingProtocolInformationModelGET = 361, // Hanging Protocol Information Model - GET
ColorPaletteStorage = 362, // Color Palette Storage
ColorPaletteQueryRetrieveInformationModelFIND = 363, // Color Palette Query/Retrieve Information Model - FIND
ColorPaletteQueryRetrieveInformationModelMOVE = 364, // Color Palette Query/Retrieve Information Model - MOVE
ColorPaletteQueryRetrieveInformationModelGET = 365, // Color Palette Query/Retrieve Information Model - GET
ProductCharacteristicsQuerySOPClass = 366, // Product Characteristics Query SOP Class
SubstanceApprovalQuerySOPClass = 367, // Substance Approval Query SOP Class
GenericImplantTemplateStorage = 368, // Generic Implant Template Storage
GenericImplantTemplateInformationModelFIND = 369, // Generic Implant Template Information Model - FIND
GenericImplantTemplateInformationModelMOVE = 370, // Generic Implant Template Information Model - MOVE
GenericImplantTemplateInformationModelGET = 371, // Generic Implant Template Information Model - GET
ImplantAssemblyTemplateStorage = 372, // Implant Assembly Template Storage
ImplantAssemblyTemplateInformationModelFIND = 373, // Implant Assembly Template Information Model - FIND
ImplantAssemblyTemplateInformationModelMOVE = 374, // Implant Assembly Template Information Model - MOVE
ImplantAssemblyTemplateInformationModelGET = 375, // Implant Assembly Template Information Model - GET
ImplantTemplateGroupStorage = 376, // Implant Template Group Storage
ImplantTemplateGroupInformationModelFIND = 377, // Implant Template Group Information Model - FIND
ImplantTemplateGroupInformationModelMOVE = 378, // Implant Template Group Information Model - MOVE
ImplantTemplateGroupInformationModelGET = 379, // Implant Template Group Information Model - GET
NativeDICOMModel = 380, // Native DICOM Model
AbstractMultiDimensionalImageModel = 381, // Abstract Multi-Dimensional Image Model
DICOMContentMappingResource = 382, // DICOM Content Mapping Resource
VideoEndoscopicImageRealTimeCommunication = 383, // Video Endoscopic Image Real-Time Communication
VideoPhotographicImageRealTimeCommunication = 384, // Video Photographic Image Real-Time Communication
AudioWaveformRealTimeCommunication = 385, // Audio Waveform Real-Time Communication
RenditionSelectionDocumentRealTimeCommunication = 386, // Rendition Selection Document Real-Time Communication
dicomDeviceName = 387, // dicomDeviceName
dicomDescription = 388, // dicomDescription
dicomManufacturer = 389, // dicomManufacturer
dicomManufacturerModelName = 390, // dicomManufacturerModelName
dicomSoftwareVersion = 391, // dicomSoftwareVersion
dicomVendorData = 392, // dicomVendorData
dicomAETitle = 393, // dicomAETitle
dicomNetworkConnectionReference = 394, // dicomNetworkConnectionReference
dicomApplicationCluster = 395, // dicomApplicationCluster
dicomAssociationInitiator = 396, // dicomAssociationInitiator
dicomAssociationAcceptor = 397, // dicomAssociationAcceptor
dicomHostname = 398, // dicomHostname
dicomPort = 399, // dicomPort
dicomSOPClass = 400, // dicomSOPClass
dicomTransferRole = 401, // dicomTransferRole
dicomTransferSyntax = 402, // dicomTransferSyntax
dicomPrimaryDeviceType = 403, // dicomPrimaryDeviceType
dicomRelatedDeviceReference = 404, // dicomRelatedDeviceReference
dicomPreferredCalledAETitle = 405, // dicomPreferredCalledAETitle
dicomTLSCyphersuite = 406, // dicomTLSCyphersuite
dicomAuthorizedNodeCertificateReference = 407, // dicomAuthorizedNodeCertificateReference
dicomThisNodeCertificateReference = 408, // dicomThisNodeCertificateReference
dicomInstalled = 409, // dicomInstalled
dicomStationName = 410, // dicomStationName
dicomDeviceSerialNumber = 411, // dicomDeviceSerialNumber
dicomInstitutionName = 412, // dicomInstitutionName
dicomInstitutionAddress = 413, // dicomInstitutionAddress
dicomInstitutionDepartmentName = 414, // dicomInstitutionDepartmentName
dicomIssuerOfPatientID = 415, // dicomIssuerOfPatientID
dicomPreferredCallingAETitle = 416, // dicomPreferredCallingAETitle
dicomSupportedCharacterSet = 417, // dicomSupportedCharacterSet
dicomConfigurationRoot = 418, // dicomConfigurationRoot
dicomDevicesRoot = 419, // dicomDevicesRoot
dicomUniqueAETitlesRegistryRoot = 420, // dicomUniqueAETitlesRegistryRoot
dicomDevice = 421, // dicomDevice
dicomNetworkAE = 422, // dicomNetworkAE
dicomNetworkConnection = 423, // dicomNetworkConnection
dicomUniqueAETitle = 424, // dicomUniqueAETitle
dicomTransferCapability = 425, // dicomTransferCapability
UniversalCoordinatedTime = 426, // Universal Coordinated Time
TalairachBrainAtlasFrameofReference = 427, // Talairach Brain Atlas Frame of Reference
SPM2T1FrameofReference = 428, // SPM2 T1 Frame of Reference
SPM2T2FrameofReference = 429, // SPM2 T2 Frame of Reference
SPM2PDFrameofReference = 430, // SPM2 PD Frame of Reference
SPM2EPIFrameofReference = 431, // SPM2 EPI Frame of Reference
SPM2FILT1FrameofReference = 432, // SPM2 FIL T1 Frame of Reference
SPM2PETFrameofReference = 433, // SPM2 PET Frame of Reference
SPM2TRANSMFrameofReference = 434, // SPM2 TRANSM Frame of Reference
SPM2SPECTFrameofReference = 435, // SPM2 SPECT Frame of Reference
SPM2GRAYFrameofReference = 436, // SPM2 GRAY Frame of Reference
SPM2WHITEFrameofReference = 437, // SPM2 WHITE Frame of Reference
SPM2CSFFrameofReference = 438, // SPM2 CSF Frame of Reference
SPM2BRAINMASKFrameofReference = 439, // SPM2 BRAINMASK Frame of Reference
SPM2AVG305T1FrameofReference = 440, // SPM2 AVG305T1 Frame of Reference
SPM2AVG152T1FrameofReference = 441, // SPM2 AVG152T1 Frame of Reference
SPM2AVG152T2FrameofReference = 442, // SPM2 AVG152T2 Frame of Reference
SPM2AVG152PDFrameofReference = 443, // SPM2 AVG152PD Frame of Reference
SPM2SINGLESUBJT1FrameofReference = 444, // SPM2 SINGLESUBJT1 Frame of Reference
ICBM452T1FrameofReference = 445, // ICBM 452 T1 Frame of Reference
ICBMSingleSubjectMRIFrameofReference = 446, // ICBM Single Subject MRI Frame of Reference
IEC61217FixedCoordinateSystemFrameofReference = 447, // IEC 61217 Fixed Coordinate System Frame of Reference
StandardRoboticArmCoordinateSystemFrameofReference = 448, // Standard Robotic-Arm Coordinate System Frame of Reference
IEC61217TableTopCoordinateSystemFrameofReference = 449, // IEC 61217 Table Top Coordinate System Frame of Reference
SRI24FrameofReference = 450, // SRI24 Frame of Reference
Colin27FrameofReference = 451, // Colin27 Frame of Reference
LPBA40AIRFrameofReference = 452, // LPBA40/AIR Frame of Reference
LPBA40FLIRTFrameofReference = 453, // LPBA40/FLIRT Frame of Reference
LPBA40SPM5FrameofReference = 454, // LPBA40/SPM5 Frame of Reference
//
//
//////////////////////////////////////////////

//////////////////////////////////////////////
//
// Private UIDs
//
Private_1_2_840_113619_4_2,
Private_1_2_840_113619_4_3,
Private_1_3_12_2_1107_5_9_1,
Private_1_2_840_113619_4_26,
Private_1_2_840_113619_4_30,
Private_2_16_840_1_113709_1_5_1,
Private_2_16_840_1_113709_1_2_2,
Private_1_2_840_113543_6_6_1_3_10002,
Private_1_2_392_200036_9116_7_8_1_1_1,
Private_1_2_392_200036_9125_1_1_2,
Private_1_2_840_113619_4_27,
Private_1_3_46_670589_11_0_0_12_1,
Private_1_3_46_670589_11_0_0_12_2,
Private_1_3_46_670589_11_0_0_12_4,
Private_1_3_46_670589_2_3_1_1,
Private_1_3_46_670589_2_4_1_1,
Private_1_3_46_670589_2_5_1_1,
Private_1_3_46_670589_5_0_1,
Private_1_3_46_670589_5_0_1_1,
Private_1_3_46_670589_5_0_10,
Private_1_3_46_670589_5_0_11,
Private_1_3_46_670589_5_0_11_1,
Private_1_3_46_670589_5_0_12,
Private_1_3_46_670589_5_0_13,
Private_1_3_46_670589_5_0_14,
Private_1_3_46_670589_5_0_2,
Private_1_3_46_670589_5_0_2_1,
Private_1_3_46_670589_5_0_3,
Private_1_3_46_670589_5_0_3_1,
Private_1_3_46_670589_5_0_4,
Private_1_3_46_670589_5_0_7,
Private_1_3_46_670589_5_0_8,
Private_1_3_46_670589_5_0_9,
Private_1_2_752_24_3_7_6,
Private_1_2_752_24_3_7_7,
Private_1_2_840_113619_5_2,
Private_1_3_46_670589_33_1_4_1,
Private_1_2_276_0_7230010_3_1_0_1
//
//
//////////////////////////////////////////////
} TSName;

  typedef const char* const (*TransferSyntaxStringsType)[2];
  static TransferSyntaxStringsType GetTransferSyntaxStrings();
  static const char * const *GetTransferSyntaxString(unsigned int ts);
  static unsigned int GetNumberOfTransferSyntaxStrings();


  // TODO: Because I would like a dual signature for TSType and TSName, C++ won't let me do it...
  static const char* GetUIDString(/*TSType*/ unsigned int ts);
  static const char* GetUIDName(/*TSType*/ unsigned int ts);

  /// Initialize object from a string (a uid number)
  /// return false on error, and internal state is set to 0
  bool SetFromUID(const char *str);

  /// When object is Initialize function return the well known name associated with uid
  /// return NULL when not initialized
  const char *GetName() const;

  /// When object is Initialize function return the uid
  /// return NULL when not initialized
  const char *GetString() const;

  operator TSType () const { return TSField; }
  UIDs() = default;

private:
  TSType TSField;
};
//-----------------------------------------------------------------------------
inline std::ostream &operator<<(std::ostream &_os, const UIDs &uid)
{
  _os << uid.GetString() << " -> " << uid.GetName();
  return _os;

}

} // end namespace gdcm

#endif //GDCMUIDS_H
