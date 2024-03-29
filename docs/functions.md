---
layout: default
title: Functions
nav_order: 4
---
###### [Native API](..\index.html) / Installation   
## Functions

This section lists the Pro Authentication API functions. For a detailed description of each function’s parameters, consult the header file DPAlAuthSdkApi.h.

<table style="width:100%;margin-left:auto;margin-right:auto;">
  <tr>
    <th style="width:181px">Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td valign="top" >DPAlInit</td>
    <td>Initialize the authentication functions.<BR><BR>
    Calling this function is optional. If you do not call it, the system will initialize itself. However if you are going to call multiple authentication functions, it is more efficient and provides better performance if you initialize and terminate explicitly.</td>
  </tr>
  <tr>
    <td valign="top">DPAlTerm</td>
    <td>Terminate the authentication process, release resources.
    You must call DPAlTerm once for each time that you called DPAlInit.</td>
  </tr>
  <tr>
    <td valign="top">DPAlAuthentication</td>
    <td>Display multi-factor authentication dialog and authenticate a user. Optionally return the type of credentials used to authenticate and/or a secret upon successful authentication.<BR><BR>
    Note that this function performs a 1-to-1 comparison -- matching a user’s credentials against their enrolled credentials in the DigitalPersona database.</td>
  </tr>
  <tr>
    <td valign="top">DPAlIdentAuthenticate</td>
    <td><b>For Kiosk environments only.</b> Display multi-factor identification dialog and identify a user. Optionally return the username, the type of credential(s) used to authenticate and/or user secret(s) upon successful identification.<BR><BR>
    Note that this function performs a 1-to-many comparison, searching Active Directory to find the user, and then authenticates the user.</td>
  </tr>
  <tr>
    <td valign="top">DPAlReadAuthPolicy</td>
    <td>Read an authentication policy.</td>
  </tr>
  <tr>
    <td valign="top">DPAlWriteSecret</td>
    <td>Save the requested secret (authenticated users only).</td>
  </tr>    
  <tr>
    <td valign="top">DPPTDoesSecretExist</td>
    <td>Check to see if a secret exists.</td>
  </tr>
  <tr>
    <td valign="top">DPAlBufferFree</td>
    <td>Release memory buffer allocated by the other functions in the API.</td>
  </tr>
  <tr>
    <td valign="top">DPAlFormatMessage</td>
    <td>Returns a message string corresponding to an error code generated by the API. The string is returned in the language of the current user.</td>
  </tr>
</table>  
