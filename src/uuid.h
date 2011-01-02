// Copyright 2010 Google Inc.
//
// This code is licensed under the same terms as WebM:
//  Software License Agreement:  http://www.webmproject.org/license/software/
//  Additional IP Rights Grant:  http://www.webmproject.org/license/additional/
// -----------------------------------------------------------------------------
//
// UUIDs used by the codec.
//
// Author: Mikolaj Zalewski (mikolajz@google.com)

#ifndef WEBPWICCODEC_UUID_H
#define WEBPWICCODEC_UUID_H

// Class ID of the decoder class (DecodeContainer)
// {C747A836-4884-47B8-8544-002C41BD63D2}
DEFINE_GUID(CLSID_WebpWICDecoder, 0xc747a836, 0x4884, 0x47b8, 0x85, 0x44, 0x0, 0x2c, 0x41, 0xbd, 0x63, 0xd2);

// GUID of the Webp container format.
// {1F122879-EBA0-4670-98C5-CF29F3B98711}
DEFINE_GUID(GUID_ContainerFormatWebp, 0x1f122879, 0xeba0, 0x4670, 0x98, 0xc5, 0xcf, 0x29, 0xf3, 0xb9, 0x87, 0x11);

// GUID used as the vendor of this DLL.
// {D4837961-2609-4B94-A9CB-A42A209AA021}
DEFINE_GUID(GUID_WebpCodecVendor, 0xd4837961, 0x2609, 0x4b94, 0xa9, 0xcb, 0xa4, 0x2a, 0x20, 0x9a, 0xa0, 0x21);


#endif // WEBPWICCODEC_UUID_H