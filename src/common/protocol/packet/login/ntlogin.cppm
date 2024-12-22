//
// Created by Don Yihtseu on 24-12-20.
//

export module ntlogin;

import standard;
import json;
import protobuf;

export namespace ntlogin {

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/NTLoginHttpRequest.cs
 */
struct http_request {
    json::field<"appid", json::number> app_id{};
    json::field<"faceUpdateTime", json::number> face_update_time{};
    json::field<"qrsig", json::string> qr_sig{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/NTLoginHttpResponse.cs
 */
struct http_response {
    json::field<"retCode", json::number> ret_code{};
    json::field<"errMsg", json::string> err_msg{};
    json::field<"qrSig", json::string> qr_sig{};
    json::field<"uin", json::number> uin{};
    json::field<"faceUrl", json::string> face_url{};
    json::field<"faceUpdateTime", json::number> face_update_time{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/NTNewDeviceQrCodeQuery.cs
 */
struct new_device_qrcode_query {
    json::field<"uint32_flag", json::number> flag{};
    json::field<"bytes_token", json::string> token{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/NTNewDeviceQrCodeRequest.cs
 */
struct new_device_qrcode_request {
    json::field<"str_dev_auth_token", json::string> dev_auth_token{};
    json::field<"uint32_flag", json::number> flag{};
    json::field<"uint32_url_type", json::number> url_type{};
    json::field<"str_uin_token", json::string> uin_token{};
    json::field<"str_dev_type", json::string> dev_type{};
    json::field<"str_dev_name", json::string> dev_name{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/NTNewDeviceQrResponse.cs
 */
struct new_device_qrcode_response {
    json::field<"uint32_guarantee_status", json::number> guarantee_status{};
    json::field<"str_url", json::string> url{};
    json::field<"ActionStatus", json::string> action_status{};
    json::field<"str_nt_succ_token", json::string> success_token{};
    json::field<"ErrorCode", json::number> error_code{};
    json::field<"ErrorInfo", json::string> error_info{};
};

} // namespace ntlogin

export namespace sso {

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/SsoNTLoginEncryptedData.cs
 */
struct ntlogin_encrypted_data {
    proto::field<1, proto::bytes> sign{};
    proto::field<3, proto::bytes> gcm_calc{};
    proto::field<4, proto::int32> type{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginUin.cs
 */
struct ntlogin_uin {
    proto::field<1, proto::string> uin{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginUid.cs
 */
struct ntlogin_uid {
    proto::field<2, proto::string> uid{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginVersion.cs
 */
struct ntlogin_version {
    proto::field<1, proto::string> kernel_version{};
    proto::field<2, proto::int32> app_id{};
    proto::field<3, proto::string> package_name{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginUnusual.cs
 */
struct ntlogin_unusual {
    proto::field<2, proto::bytes> sig{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginSystem.cs
 */
struct ntlogin_system {
    proto::field<1, proto::string> system{};
    proto::field<2, proto::string> device{};
    proto::field<3, proto::int32> type{};
    proto::field<4, proto::bytes> guid{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginCookie.cs
 */
struct ntlogin_cookie {
    proto::field<1, proto::string> cookie{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginCredentials.cs
 */
struct ntlogin_credentials {
    proto::field<3, proto::bytes> temp_password{};
    proto::field<4, proto::bytes> tgt{};
    proto::field<5, proto::bytes> d2{};
    proto::field<6, proto::bytes> d2_key{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginCaptchaSubmit.cs
 */
struct ntlogin_captcha_submit {
    proto::field<1, proto::string> ticket{};
    proto::field<2, proto::string> rand_str{};
    proto::field<3, proto::string> aid{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginCaptchaUrl.cs
 */
struct ntlogin_captcha_url {
    proto::field<3, proto::string> url{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Universal/SsoNTLoginError.cs
 */
struct ntlogin_error {
    proto::field<1, proto::uint32> code{};
    proto::field<2, proto::string> tag{};
    proto::field<3, proto::string> message{};
    proto::field<4, proto::string> new_device_verify_url{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/Body/SsoNTLoginEasyLogin.cs
 */
struct ntlogin_easy_login {
    proto::field<1, proto::bytes> temp_password{};
    proto::field<2, ntlogin_captcha_submit> captcha{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/SsoNTLoginHeader.cs
 */
struct ntlogin_header {
    proto::field<1, ntlogin_uin> uin{};
    proto::field<2, ntlogin_system> system{};
    proto::field<3, ntlogin_version> version{};
    proto::field<4, ntlogin_error> error{};
    proto::field<5, ntlogin_cookie> cookie{};
};

/*
 *  See: https://github.com/LagrangeDev/Lagrange.Core/blob/master/Lagrange.Core/Internal/Packets/Login/NTLogin/Plain/SsoNTLoginResponse.cs
 */
struct ntlogin_response {
    proto::field<1, ntlogin_credentials> credentials{};
    proto::field<2, ntlogin_captcha_url> captcha_url{};
    proto::field<3, ntlogin_unusual> unusual{};
    proto::field<4, ntlogin_uid> uid{};
};

}