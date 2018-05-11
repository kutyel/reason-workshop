/** Reason bindings for console */;

[@bs.val] external print : string => unit = "console.log";

[@bs.val] [@bs.scope "console"] external warn : string => unit = "";

[@bs.val] [@bs.scope "console"] external error : string => unit = "";

[@bs.val] [@bs.scope "Math"] external sqrt : int => int = "";

print(string_of_int(sqrt(4))); /* 2 */

warn("warn");

error("error");
