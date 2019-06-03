-------------------------------------------------------------------

                       DigitalPersona Altus SDK
			     Version 1.1.0

                             March 2017
				
      (c) 1996-2017 Crossmatch, Inc. All Rights Reserved. 
-------------------------------------------------------------------

DigitalPersona Altus Authentication SDK is a library that allows you to authenticate users in your applications. DigitalPersona Altus Authentication SDK is part of DigitalPersona Altus version 1.1.0 and higher.  

This document provides late-breaking or other information that supplements the DigitalPersona Altus SDK documentation.
http://www.crossmatch.com/Support/Reference-Material/DigitalPersona-Altus-Reference-Material/


-------------------------
How to Use This Document
-------------------------

To view the ReadMe file on-screen in Windows Notepad, maximize the Notepad window. On the Format menu, click Word Wrap. To print the ReadMe file, open it in Notepad or another word processor, and then use the Print command on the File menu.


---------
CONTENTS
---------

1.   COMPATIBILITY
2.   SYSTEM REQUIREMENTS 
3.   KNOWN ISSUES      
4.   SUPPORT AND FEEDBACK


-----------------
1. COMPATIBILITY
-----------------

DigitalPersona Altus SDK is compatible with 
 - DigitalPersona 2.1.0


-----------------------
2. SYSTEM REQUIREMENTS
-----------------------

Altus Clients installed on supported OS 


----------------
3. USAGE 
----------------

Assembly DigitalPersona.Altus.VerifyIdentity.Sdk.dll must be placed in the same directory as the executable file produced by the sample code.


----------------
4. KNOWN ISSUES 
----------------

In Verify Your Identity dialog, when invoked within Windows logon session: If 2-factor authentication (like Fingerprint + PIN) is cancelled after authentication with only one credential, VYI dialog closes but returns OK instead of Cancelled. It also returns identity of the authenticated user. This is not a security hole for the applications that need to release secrets, because the secret release requires authentication by both credentials, but may cause wrong error reporting. For SDK applications that rely on the return code of the VYI dialog and do not need a secret, this may result in authentication only by partial policy.
C++ sample code only works if compiled in 32 version. This will be addressed in the next release of DigitalPersona. 


------------------------
5. SUPPORT AND FEEDBACK
------------------------

We provide fee-based support packages and support for registered users at our web site http://www.crossmatch.com. 


If you have suggestions for future product releases or require technical support for this version of the SDK, send email to techsupport@digitalpersona.com. In the subject line, type "Altus SDK support."



